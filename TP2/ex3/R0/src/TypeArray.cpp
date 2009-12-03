 #include "TypeArray.hpp"

TypeArray::TypeArray(const Type* type, const std::deque<TypeInterval*>& intervals):
	_type((Type*)type), _intervals((std::deque<TypeInterval*>) intervals)
{
}

TypeArray::~TypeArray() {}
		
void TypeArray::setType(const Type* type) {
	_type = (Type*) type;
}

Type* TypeArray::getType() const {
	return _type;
}

void TypeArray::setIntervals(const std::deque<TypeInterval*>& intervals) {
	_intervals = (std::deque<TypeInterval*>) intervals;
}

std::deque<TypeInterval*>& TypeArray::getIntervals() const {
	return (std::deque<TypeInterval*>&) _intervals;
}
