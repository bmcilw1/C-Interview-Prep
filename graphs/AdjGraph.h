// Brian McIlwain
// Implementation of Adj List graph

#ifndef ADJGRAPH_H
#define ADJGRAPH_H

#include <vector>
#include <list>
#include <queue>

class AdjGraph
{
public:
    AdjGraph (int length);
    virtual ~AdjGraph ();
    bool insert (int x, int y);
    bool remove (int x, int y);
    bool searchDFS (int v);
    bool searchBFS (int v);
    int edgeCount;
    std::queue<int> orderVisited;

private:
    std::vector< std::list<int> > graph;
    std::vector<bool> visited;
    void dfs (int v);
};
#endif
