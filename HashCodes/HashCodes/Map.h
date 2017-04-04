#pragma once
#include <vector>
#include <string>

using namespace std;

template <class valueType>
class Map
{
	Map<valueType>* next;
	int size;
	valueType mapVal;
	std::string mapKey="";
public:
	Map();
	~Map();

	bool add(std::string key, valueType value, Map<valueType>* next);
	valueType getValue(std::string key, Map<valueType>* next);
	bool remove(std::string key);
	int getSize();
	Map<valueType>* getNext();
};

