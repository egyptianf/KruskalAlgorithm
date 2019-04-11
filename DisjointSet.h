//
// Created by nerdo on 4/11/19.
//

#ifndef KRUSKAL_DISJOINTSET_H
#define KRUSKAL_DISJOINTSET_H
#include <iostream>
#include <vector>
#include "Edge.h"


using namespace std;


class DisjointSet {
private:
    int NUMOFELEMENTS;
    int* roots, *ranks;
public:
    DisjointSet(int);
    int find(int);
    void merge(int, int, vector<Edge>, Edge);


    ~DisjointSet();
};



#endif //KRUSKAL_DISJOINTSET_H
