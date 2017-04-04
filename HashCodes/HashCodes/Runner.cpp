//Travis Guthrie
#include <list>
#include <iostream>
#include "Map.h"
#include "Map.cpp"



using namespace std;


int main()
{

	Map<std::string>* map= new Map<std::string>;
	std::string mk;
	std::string mv="first";

	mk = std::hash<std::string>{}(mv);

	map->add(mk, mv);
	cout << map->getValue(mk,map);

	cin.get();
	cin.get();
	return 0;
}