#ifndef __Node_h
#define __Node_h

#include <vector>
#include "Edge.h"

class Node {
private:
    std::vector<Edge*> edgeSet;
public:
    Node();
    ~Node();

    int edgeCount();

    // Edge to node
    void connectToNode(Node* node);

    // Weighted edge to node
    void connectToNode(Node* node, int val);
};

#endif // __Node_h
