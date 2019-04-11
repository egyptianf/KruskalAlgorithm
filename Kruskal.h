//
// Created by nerdo on 4/11/19.
//

#ifndef KRUSKAL_KRUSKAL_H
#define KRUSKAL_KRUSKAL_H
#include "Graph.h"
#include "DisjointSet.h"
#include <iostream>
#include <vector>
#include <algorithm>
class Kruskal {

    bool compareEdges(Edge e1, Edge e2) {return (e1.getLength() < e2.getLength());}
    vector<Edge> MST;

public:
    Kruskal(Graph);
    vector<Edge> getMST(){ return MST;}
};


#endif //KRUSKAL_KRUSKAL_H
