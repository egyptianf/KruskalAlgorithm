//
// Created by nerdo on 4/11/19.
//

#include "Edge.h"
Edge::Edge(){}
Edge::Edge(int n1, int n2, int length) {
    this->node1 = n1;
    this->node2 = n2;
    this->length = length;
}