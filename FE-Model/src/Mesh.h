#include <vector>
#include "Node.h"
#include "Element4.h"
using namespace std;



class Mesh
{
public:	
	enum ElementType { PLANE_4_NODE, SHELL_4_NODE, SOLID_8_NODE };
	Mesh();
	~Mesh();
	
public:
	int numNodes;
	int numEle4s;
	ElementType eleType;
	vector<Node*> nodes;
	vector<Element4*> ele4s;
};

