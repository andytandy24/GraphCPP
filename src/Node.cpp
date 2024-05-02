#include "Node.h"
#include <vector>
using namespace std;

Node::~Node() {
    for(int i = 0; i < edgeSet.size(); i++)
        delete edgeSet[i];
    edgeSet.clear();
}

void Node::connectToNode(Node* node) {
    edgeSet.push_back(new Edge(node));
}

void Node::connectToNode(Node* node, int weight) {
    edgeSet.push_back(new Edge(node,weight));
}
