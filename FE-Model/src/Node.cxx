#include "Node.h"

Node::Node() :
	id(0), x(0.0), y(0.0), z(0.0)
{
}

Node::Node(int id0, double x0, double y0, double z0) :
	id(id0), x(x0), y(y0), z(z0)
{
}


Node::~Node()
{
}
