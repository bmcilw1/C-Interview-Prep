// Brian McIlwain
// Implementation of Adj List graph

#ifndef ADJGRAPH_H
#define ADJGRAPH_H

#include <vector>
#include <list>

using std::list;
using std::vector;

class AdjGraph
{
public:
    AdjGraph ();
    AdjGraph (int length);
    virtual ~AdjGraph ();
    void Insert (int x, int y);
    void Remove (int x, int y);
    int Count;

private:
    vector< list<int> > graph;
};
#endif
