//
// Created by nerdo on 4/11/19.
//

#ifndef KRUSKAL_GRAPH_H
#define KRUSKAL_GRAPH_H
#include "Edge.h"
#include <iostream>
#include <vector>

using namespace std;

class Graph {

    vector<Edge> edges;
    vector<int> nodes;
    int size;
    int edges_num;
public:
    Graph(int, int);
    void assign_edges();
    vector<Edge> getEdges(){return edges;}
    int getSize(){ return size;}
};


#endif //KRUSKAL_GRAPH_H
