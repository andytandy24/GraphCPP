#ifndef __Node_h
#define __Node_h

#include <map>

class Node {
private:
    std::map<Edge*, Node*> edgeSet;
public:
    Node();
    ~Node();

    int edgeCount();
    void connectNode(Node* node);
    void connectNode(Node* node, int val); // Weighted connection
};

#endif // __Node_h
