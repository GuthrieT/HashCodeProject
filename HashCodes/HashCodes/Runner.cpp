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
	std::string mk2;
	std::string mv2 = "second";

	mk = std::hash<std::string>{}(mv);
	mk2 = std::hash<std::string>{}(mv2);

	map->add(mk, mv,map);
	map->add(mk2, mv2, map);

	cout << map->getValue(mk,map);
	cout << map->getValue(mk2, map);

	cin.get();
	cin.get();
	return 0;
}