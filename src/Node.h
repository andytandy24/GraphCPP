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

    void addEdge(Edge* edge):
};

#endif // __Node_h
