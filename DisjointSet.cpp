//
// Created by nerdo on 4/11/19.
//

#include "DisjointSet.h"

DisjointSet::DisjointSet(int n) {
    NUMOFELEMENTS = n;
    roots = new int [NUMOFELEMENTS];
    ranks = new int [NUMOFELEMENTS];
    for(int i =0; i< NUMOFELEMENTS; i++) {
        roots[i] = i;
        ranks[i] = 1;
    }
}



int DisjointSet::find(int i) {
    if(i >= NUMOFELEMENTS) return -1;
    while(roots[i] != i) i = roots[i];
    return i;
}
void DisjointSet::merge(int n1, int n2, vector<Edge> T, Edge e) {
    int root1 = find(n1), root2 = find(n2);
    if(root1 == root2) {
        cout << "Already in the same set!" << endl;
        return;
    }

    if(ranks[root2] >= ranks[root1]){
        roots[root1] = root2;
        ranks[root2] += ranks[root1];
    }
    else{
        roots[root2] = root1;
        ranks[root1] += ranks[root2];
    }
    T.push_back(e);
}



DisjointSet::~DisjointSet() {
    delete [] roots;
    delete [] ranks;
}