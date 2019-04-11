#include <iostream>
#include "Kruskal.h"
#include <iterator>

int main() {
    Graph g(7, 12);
    g.assign_edges();
    Kruskal k(g);


    vector<Edge> MST = k.getMST();

    for(vector<Edge>::iterator it = MST.begin(); it != MST.end(); it++) {
        (*it).getNode1();
        (*it).getNode2();
        (*it).getLength();
    }


    return 0;
}

