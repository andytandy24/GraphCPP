#ifndef __Graph_h
#define __Garph_h

#include <vector>

class Graph {
private:
    vector<Node*> nodeSet;
public:
    Graph();
    ~Graph();

    bool isEmpty();
    bool isBipartite();
    bool isComplete()
    bool isTree();
};

#endif // __Graph_h
