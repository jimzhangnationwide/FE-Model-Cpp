#include <iostream>
#include <vector>
#include "Node.h"
#include "Element4.h"
#include "Mesh.h"
using namespace std;

int main() {
	int count = 5;
	cout << count << "\n";

	vector<Node*> nodes;
	nodes.push_back(new Node(1, 1.1, 2.1, 3.1));
	nodes.push_back(new Node(2, 2.1, 3.1, 4.1));
	for (int i=0; i<nodes.size(); i++)
		cout << nodes[i]->id << " " << nodes[i]->x << " " << nodes[i]->y << " " << nodes[i]->z << "\n";

	vector<Element4*> ele4s;
	ele4s.push_back(new Element4(1, 1,2,3,4));
	ele4s.push_back(new Element4(2, 5,6,7,8));
	for (int i = 0; i < ele4s.size(); i++)
		cout << ele4s[i]->id << " " << ele4s[i]->node[0] << " " << ele4s[i]->node[1] << " " << ele4s[i]->node[2] << " " << ele4s[i]->node[3] << "\n";

	//Mesh mesh = Mesh();
	//cout << mesh.eleType;

	cin >> count;
	return 0;
}