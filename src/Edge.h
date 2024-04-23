#ifndef __Edge_h
#define __Edge_h

class Edge {
private:
    Node* Destination;
    int weight;
public:
    Edge(Node* destination);
    Edge(Node* destination, int val); // Weighted edge
    ~Edge();

    void setWeight(int val);
    int getWeight();
};

#endif // __Edge_h
