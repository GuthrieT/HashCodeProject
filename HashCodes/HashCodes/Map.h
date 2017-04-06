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

	bool add(std::string key, valueType value, Map<valueType>* m);
	valueType getValue(std::string key, Map<valueType>* next);
	bool remove(std::string key, Map<valueType>* next);
	int getSize();
	Map<valueType>* getNext();
	void setNext(Map<valueType>* nextM);
	std::string getKey();
};

