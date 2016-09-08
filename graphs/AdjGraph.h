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
    bool insert (int x, int y);
    bool remove (int x, int y);
    int count;

private:
    vector< list<int> > graph;
};
#endif
