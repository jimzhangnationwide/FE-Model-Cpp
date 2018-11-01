#include "Element4.h"

Element4::Element4():
	id(0)
{
	node = new int[4];
	for (int i = 0; i < 4; i++)
		node[i] = 0;
}

Element4::Element4(int id0, int n1, int n2, int n3, int n4) :
	id(id0)
{
	node = new int[4];
	node[0] = n1;
	node[1] = n2;
	node[2] = n3;
	node[3] = n4;
}

Element4::~Element4()
{
	delete[] node;
}
