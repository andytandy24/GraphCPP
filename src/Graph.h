#ifndef __Graph_h
#define __Garph_h

#include <vector>

class Graph {
private:
    vector<Node*> nodeSet;
    vector<vector<int>> adjacencyMatrix;
public:
    Graph();
    ~Graph();

    bool isEmpty();
    bool isBipartite();
    bool isComplete()
    bool isTree();
};

#endif // __Graph_h
