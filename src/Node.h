#ifndef __Node_h
#define __Node_h

#include <vector>

class Node {
private:
    vector<Edge*> edgeSet;
public:
    Node();
    ~Node();

    int edgeCount();
    void connectNode(Node* node);
    void connectNode(Node* node, int val); // Weighted connection
};

#endif // __Node_h
