#pragma once
class Node
{
public:
	Node();
	Node(int, double, double, double);
	~Node();

public:
	int id;
	double x, y, z;
};

