 #include "TypeArray.hpp"

TypeArray::TypeArray(const Type* type, std::deque<TypeInterval*> intervals) {}

TypeArray::~TypeArray() {}
		
void TypeArray::setType(const Type* type) {}

Type* TypeArray::getType() const {}

void TypeArray::setIntervals(const std::deque<TypeInterval*>* intervals) {}
std::deque<TypeInterval*>* TypeArray::getIntervals() const {}
