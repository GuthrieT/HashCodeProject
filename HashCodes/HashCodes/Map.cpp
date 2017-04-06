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
bool Map<valueType>::add(std::string key, valueType value, Map<valueType>* m)
{
	if (m->getKey() == "")
	{
		size++;
		mapKey = key;
		mapVal = value;
		return true;
	}
	else if (m->getNext() != nullptr)
	{
		add(key, value, m->getNext());
	}
	else
	{
		Map<valueType>* temp = new Map<valueType>;
		m->setNext(temp);
		size++;
		temp->mapKey = key;
		temp->mapVal = value;
		//cout << temp->mapVal;
		return true;
	}
}
template <class valueType>
valueType Map<valueType>::getValue(std::string key, Map<valueType>* next)
{
	Map<valueType>* searchMap = next;
	for (int i = 0; i < size; i++)
	{
		if (searchMap->getKey() == key)
		{
			return mapVal;
		}
		else if (searchMap->getNext() != nullptr)
		{
			searchMap = searchMap->getNext();
		}

	}
	
	cout << "Was not found, returning first value." << endl;
	return next->mapVal;
}
template <class valueType>
bool Map<valueType>::remove(std::string key, Map<valueType>* next)
{
	Map<valueType>* searchMap = next;
	for (int i = 0; i < size; i++)
	{
		if (searchMap->getNext()!= nullptr&& searchMap->getNext()->getKey() == key)
		{
			Map<valueType>* temp = searchMap->getNext()->getNext();
			searchMap->getNext()->~Map();
			searchMap->setNext(temp);
			size--;
			return true;
		}
		else if (searchMap->getNext() != nullptr)
		{
			searchMap = searchMap->getNext();
		}

	}

	cout << "was not removed." << endl;
	return false;
}

template <class valueType>
int Map<valueType>::getSize()
{
	return size;
}

template <class valueType>
Map<valueType>* Map<valueType>::getNext()
{
	return next;
}


template <class valueType>
void Map<valueType>::setNext(Map<valueType>* nextM)
{
	next = nextM;
}

template <class valueType>
std::string Map<valueType>::getKey()
{
	return mapKey;
}