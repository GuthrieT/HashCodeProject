#pragma once
#include <string>

using namespace std;

template<class valueType>
class Node
{
	valueType value;
	std::string key;
public:
	Node();
	~Node();

	void setKey(std::string newKey);
	void setValue(valueType newValue);
	std::string getKey();
	valueType getValue();
};

