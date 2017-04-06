#pragma once
#include <string>

using namespace std;


class Node
{
	
	int value;
public:
	Node();
	~Node();

	
	void setValue(int newValue);
	int getValue();
};

