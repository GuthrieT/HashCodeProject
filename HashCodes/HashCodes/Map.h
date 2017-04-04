#pragma once
#include <vector>
#include <string>

using namespace std;

template <class valueType>
class Map
{
	vector<valueType> map;
public:
	Map();
	~Map();

	bool add(std::string key, valueType value);
	valueType getValue(std::string key);
	bool remove(std::string key);
	int getSize();
};

