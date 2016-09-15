// Brian McIlwain
// Cracking the C Interview
// Super simple graph implementation via Adjacency list

#include <iostream>
#include "AdjGraph.h"

int main()
{
    AdjGraph g(6);

    /* Adj List:
     * 0 -> 1, 5, 3
     * 1 -> 1, 2, 3
     * 2 -> 0
     * 3 -> 
     * 4 -> 
     * 5 -> 4
     *
     * dfs(1): 1, 2, 0, 5, 4, 3
     * bfs(1): 1, 2, 3, 0, 5, 4
     */

    g.insert(1,1);
    g.insert(0,1);
    g.insert(0,5);
    g.insert(5,4);
    g.insert(2,0);
    g.insert(1,2);
    g.insert(1,3);
    g.insert(0,3);

    g.searchDFS(1);

    std::cout << "DFS: ";
    while (!g.orderVisited.empty()) {
        std::cout << g.orderVisited.front() << " ";
        g.orderVisited.pop();
    }

    g.searchBFS(1);

    std::cout << "\nBFS: ";
    while (!g.orderVisited.empty()) {
        std::cout << g.orderVisited.front() << " ";
        g.orderVisited.pop();
    }

    std::cout << std::endl;

    g.remove(1,1);

    return 0;
}
