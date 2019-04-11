//
// Created by nerdo on 4/11/19.
//

#include "Kruskal.h"
Kruskal::Kruskal(Graph g) {
    sort(g.getEdges().begin(), g.getEdges().end(), compareEdges);
    int n = g.getSize();
    vector<Edge> T;//Will contain the minimum spanning tree.

    DisjointSet d(n);
    while(T.size() != n-1)
    {
        Edge shortest = g.getEdges().front();
        d.merge(shortest.getNode1(), shortest.getNode2(), T, shortest);
        g.getEdges().erase(g.getEdges().begin());
    }

    MST = T;
}