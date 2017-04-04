#include "Map.h"


template <class valueType>
Map<valueType>::Map()
{
}

template <class valueType>
Map<valueType>::~Map()
{
}

template <class valueType>
bool Map<valueType>::add(std::string key, valueType value)
{
	size++;
	mapKey = key;
	mapVal = value;
	return true;
}
template <class valueType>
valueType Map<valueType>::getValue(std::string key, Map<valueType>* next)
{
	if (key == mapKey)
	{
		return mapVal;
	}
	else if(next != nullptr)
	{
		getValue(key, next);
	}
	return NULL;
}
template <class valueType>
bool Map<valueType>::remove(std::string key)
{
	return true;
}

template <class valueType>
int Map<valueType>::getSize()
{
	return size;
}