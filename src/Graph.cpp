#include "Graph.h"
#include <vector>
using namespace std;

Graph::~Graph() {
   for(auto it = nodeSet.begin(); it != nodeSet.end(); it++)
        delete it->second;
    nodeSet.clear();
}

void Graph::connectNode(Node* node1, Node* node2) {
    node1->connectToNode(node2);
}

void Graph::connectNode(Node* node1, Node* node2, int weight) {
    node1->connectToNode(node2, weight);
}

void Graph::connectNodes(Node* node1, Node* node2) {
    node1->connectToNode(node2);
    node2->connectToNode(node1);
}

void Graph::connectNodes(Node* node1, Node* node2, int weight) {
    node1->connectToNode(node2, weight);
    node2->connectToNode(node1, weight);
}

Node* Graph::getNode(int searchValue) {
    return nodeSet[searchValue];
}
