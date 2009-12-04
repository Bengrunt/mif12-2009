 #include "TypeArray.hpp"

TypeArray::TypeArray(const Type* type, const std::vector<TypeInterval*>* intervals):
	_type((Type*)type), _intervals((std::vector<TypeInterval*>*) intervals)
{
	updateName();
}

TypeArray::~TypeArray() {}

void TypeArray::setType(const Type* type) {
	_type = (Type*) type;
}

Type* TypeArray::getType() const {
	return _type;
}

void TypeArray::setIntervals(const std::vector<TypeInterval*>* intervals) {
	updateName();
	_intervals = (std::vector<TypeInterval*>*) intervals;
}

std::vector<TypeInterval*>* TypeArray::getIntervals() const {
	return _intervals;
}

void TypeArray::updateName() {
	char* tmp = NULL;
	size_t nbIntervals = _intervals->size();
	char* inters[nbIntervals];
	size_t length[nbIntervals], total = 0;
	size_t kwArrayOfLength = strlen("array of ");
	size_t kwTypeLength = strlen(_type->getName());
	
	for(unsigned int i = 0; i < nbIntervals; i++) {
		inters[i] = (*_intervals)[i]->getName();
		length[i] = strlen(inters[i]);
		total += length[i];
	}
	
	tmp = new char[
		kwArrayOfLength +
		kwTypeLength +
		strlen("[") + 
		total + 
		(nbIntervals - 1) * strlen(",") + 
		strlen("]") + 
		1
	];
	if(!tmp) throw new AllocationException;
	
	strcpy(tmp, "array of ");
	strcat(tmp, _type->getName());
	strcat(tmp, "[");
	for(unsigned int i = 0; i < nbIntervals; i++) {
		strcat(tmp, inters[i]);
		if(i != nbIntervals - 1) 
			strcat(tmp, ",");
	}
	strcat(tmp, "]");
	
	if(_name) delete[] _name;
	_name = tmp;
}
