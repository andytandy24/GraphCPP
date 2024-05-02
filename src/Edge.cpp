#include "Edge.h"
using namespace std;

Edge::Edge(Node* destination) {
    this->destination = destination;
}

Edge::Edge(Node* destination, int weight) {
    this->destination = destination;
    this->weight = weight;
}
