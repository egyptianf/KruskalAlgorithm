//
// Created by nerdo on 4/11/19.
//

#include "Graph.h"
Graph::Graph(int nodes_num, int edges_num) {
    nodes.resize((unsigned long) nodes_num);
    edges.resize((unsigned long) edges_num);
    for(int i = 0; i < nodes_num; i++)
        nodes.push_back(i);
    size = nodes_num;
    this->edges_num = edges_num;
}
void Graph::assign_edges() {
    for(int i = 0; i < edges_num ; i++)
    {
        cout << "Please enter the edge from one node to another: " << endl;
        cout << "Please enter the first node: ";
        int n1;
        cin >> n1;
        cout << "Please enter the second node: ";
        int n2;
        cin >> n2;
        cout << "Please enter the edge lenght: ";
        int length;
        cin >> length;

        Edge e(n1, n2, length);
        edges.push_back(e);

    }
}