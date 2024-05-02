#ifndef __Edge_h
#define __Edge_h

class Node;
class Edge {
private:
    Node* destination;
    int weight;
public:
    Edge(Node* destination);
    Edge(Node* destination, int val);

    void setWeight(int val);
    int getWeight();
};

#endif // __Edge_h
