#ifndef __Edge_h
#define __Edge_h

class Edge {
private:
    Node* Source;
    Node* Destination;
    int weight;
public:
    Edge(Node* source, Node* destination);
    ~Edge();

    void setWeight(int i);
    int getWeight();
};


#endif // __Edge_h
