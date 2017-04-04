#include "Node.h"


template <class valueType>

Node<valueType>::Node()
{
}

template <class valueType>

Node<valueType>::~Node()
{
}

template <class valueType>
void Node<valueType>::setKey(std::string newKey)
{
	key = newKey;
}

template <class valueType>
void Node<valueType>::setValue(valueType newValue)
{
	value = newValue;
}

template <class valueType>
std::string Node<valueType>::getKey()
{
	return key;
}

template <class valueType>
valueType Node<valueType>::getValue()
{
	return value;
}