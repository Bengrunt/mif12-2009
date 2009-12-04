#include "TypeInterval.hpp"
#include "cstdio"

/* Initialisation des constantes de classe. */
const char* TypeInterval::_genericNameFormat = "interval %s..%s";
const char* TypeInterval::_tags[] = {"\%s", "\%d", "\%u"};
const char* TypeInterval::_idFormat = "{id:%u}";
const char* TypeInterval::_iValFormat = "%d";

/**
 * Constructeur.
 */
TypeInterval::TypeInterval(
	const Boundary minimum,
	const Boundary maximum
):
	_minimum((Boundary)minimum),
	_maximum((Boundary)maximum),
	_nameFormat(NULL)
	
{
	_nameFormat = new char[
		strlen(_genericNameFormat) -
		(strlen(_tags[STR]) * 2) +
		(strlen(_idFormat) * 2) +
		1
	];
	if(!_nameFormat) throw new AllocationException;
	updateFormat();
	updateName();
}

/**
 * Destructeur.
 */
TypeInterval::~TypeInterval() {	
	delete[] _nameFormat;
	delete[] _name;
}

/* Mise à jour de la chaîne représentative. */
void TypeInterval::updateFormat() {
	sprintf(
		_nameFormat,
		_genericNameFormat,
		_minimum.id ? _idFormat : _iValFormat,
		_maximum.id ? _idFormat : _iValFormat
	);
}

void TypeInterval::updateName() {
	char* tmp = NULL;
	size_t sMin = 0, sMax = 0;
	const char* minTag = (
		_minimum.id ? 
			_tags[D_UINT] : 
			_tags[D_INT]
	);
	const char* maxTag = (
		_maximum.id ?
			_tags[D_UINT] :
			_tags[D_INT]
	);
	
	{
		char tmp2[16] = {'\0'};
		
		sprintf(tmp2, minTag, _minimum.data.id);
		sMin = strlen(tmp2);
		
		memset(tmp2, '\0', 16);
		
		sprintf(tmp2, maxTag, _maximum.data.id);
		sMax = strlen(tmp2);
	}
	
	tmp = new char[strlen(_nameFormat) - (strlen(minTag) + strlen(maxTag)) + (sMin + sMax) + 1];
	if(!tmp) throw new AllocationException;
	
	sprintf(
		tmp,
		_nameFormat,
		_minimum.id ? _minimum.data.id : _minimum.data.iVal,
		_maximum.id ? _maximum.data.id : _maximum.data.iVal
	);
	
	if(_name) delete[] _name;
	_name = tmp;
}

/* Modificateurs. */
void TypeInterval::setMinimum(const TypeInterval::Boundary minimum) {
	_minimum = minimum;
	updateFormat();
	updateName();
}

void TypeInterval::setMaximum(const TypeInterval::Boundary maximum) {
	_maximum = maximum;
	updateFormat();
	updateName();
}

/* Accesseurs. */
TypeInterval::Boundary TypeInterval::getMinimum() const {
	return _minimum;
}

TypeInterval::Boundary TypeInterval::getMaximum() const {
	return _maximum;
}
