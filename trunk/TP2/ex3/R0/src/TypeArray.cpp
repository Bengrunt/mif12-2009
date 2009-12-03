 #include "TypeArray.hpp"

TypeArray::TypeArray(const Type* type, const std::vector<TypeInterval*>* intervals):
	_type((Type*)type), _intervals((std::vector<TypeInterval*>*) intervals)
{
	_name = "tableau";
}

TypeArray::~TypeArray() {}

void TypeArray::setType(const Type* type) {
	_type = (Type*) type;
}

Type* TypeArray::getType() const {
	return _type;
}

void TypeArray::setIntervals(const std::vector<TypeInterval*>* intervals) {
	_intervals = (std::vector<TypeInterval*>*) intervals;
}

std::vector<TypeInterval*>* TypeArray::getIntervals() const {
	return _intervals;
}
