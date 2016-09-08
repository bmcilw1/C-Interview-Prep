// Brian McIlwain
// Cracking the C Interview
// Super simple graph implementation via Adjacency list

#include <iostream>
#include "AdjGraph.h"

using std::cout;
using std::endl;

//vector< list<int> > adjList(4);

int main()
{
    AdjGraph gr;
    AdjGraph g(3);
    g.insert(1,1);
    g.remove(1,1);
    
    // Iterate over graph
    /*for (vector< list<int> >::iterator vectit = adjList.begin(); vectit != adjList.end(); ++vectit)
    {
        cout << "vertex: " << vectit - adjList.begin() << " contains a path to: ";

        for (list<int>::iterator listit = vectit->begin(); listit != vectit->end(); ++listit)
        {
            int value = *listit;
            cout << value << " ";
        }

        cout << endl;
    }*/

    return 0;
}
