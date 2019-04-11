//
// Created by nerdo on 4/11/19.
//

#ifndef KRUSKAL_EDGE_H
#define KRUSKAL_EDGE_H


class Edge {
    int node1, node2, length;

public:
    Edge();
    Edge(int, int, int);
    int getLength(){ return length;}
    int getNode1(){ return node1;}
    int getNode2(){return node2;}
};


#endif //KRUSKAL_EDGE_H
