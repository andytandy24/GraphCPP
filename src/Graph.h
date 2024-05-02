#ifndef __Graph_h
#define __Graph_h

#include <map>
#include "Node.h"

class Graph {
private:
    std::map<int,Node*> nodeSet; // Used vector for better performance than the set container
public:
    Graph();
    ~Graph();

    // One way connections
    void connectNode(Node* node1, Node* node2);
    void connectNode(Node* node1, Node* node2, int weight);

    // Two way connections
    void connectNodes(Node* node1, Node* node2);
    void connectNodes(Node* node1, Node* node2, int weight);

    Node* getNode(int searchValue);

    //bool isBipartite();
};

#endif // __Graph_h
