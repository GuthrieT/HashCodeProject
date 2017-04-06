//Travis Guthrie
#include <list>
#include <iostream>
#include "Map.h"
#include "Map.cpp"
#include "Node.h"




using namespace std;

void hashString(std::string& k, std::string v);
void hashInt(std::string& k, int v);

int main()
{

	Map<std::string>* map= new Map<std::string>;
	Map<int>* map2= new Map<int>;
	Map<Node>* map3 = new Map<Node>;


	//Start of string example
	std::string mk;
	std::string mv="First";

	std::string mk2;
	std::string mv2 = "Second";


	std::string mk3;
	std::string mv3 = "Third";
	 
	std::string mk4;
	std::string mv4 = "Foruth";

	hashString(mk, mv);
	hashString(mk2, mv2);
	hashString(mk3, mv3);
	hashString(mk4, mv4);
	

	map->add(mk, mv, map);
	map->add(mk2, mv2, map);
	map->add(mk3, mv3, map);
	map->add(mk4, mv4, map);

	cout << map->getValue(mk,map) << endl;
	cout << map->getValue(mk2, map) << endl;
	cout << map->getValue(mk3, map) << endl;
	cout << map->getValue(mk4, map) << endl;
	//End of string example

	//Size example
	cout << map->getSize() << endl;
	//Remove exapmle
	map->remove(mk2, map);

	cout << map->getValue(mk2, map) << endl;
	

	//Start of int example
	std::string mik;
	int miv = 5;

	std::string mik2;
	int miv2 = 6;

	std::string mik3;
	int miv3 = 7;


	hashInt(mik, miv);
	hashInt(mik2, miv2);
	hashInt(mik3, miv3);

	map2->add(mik, miv, map2);
	map2->add(mik2, miv2, map2);
	map2->add(mik3, miv3, map2);


	cout << map2->getValue(mik, map2) << endl;
	cout << map2->getValue(mik2, map2) << endl;
	cout << map2->getValue(mik3, map2) << endl;
	//End of int example


	//Start of Class example
	std::string mnk;
	Node mnv;
	mnv.setValue(5);

	std::string mnk2;
	Node mnv2;
	mnv2.setValue(6);

	std::string mnk3;
	Node mnv3;
	mnv3.setValue(7);


	hashInt(mnk, mnv.getValue());
	hashInt(mnk2, mnv2.getValue());
	hashInt(mnk3, mnv3.getValue());


	map3->add(mnk, mnv, map3);
	map3->add(mnk2, mnv2, map3);
	map3->add(mnk3, mnv3, map3);

	cin.get();
	cin.get();
	return 0;
}

void hashString(std::string& k, std::string v)
{
	k = std::hash<std::string>{}(v);
}
void hashInt(std::string& k, int v)
{
	k = std::hash<int>{}(v);
}