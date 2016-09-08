#include "AdjGraph.h"

AdjGraph::AdjGraph() {
    count = 0;
}

AdjGraph::AdjGraph(int length) {
    graph.resize(length);
    count = 0;
}

AdjGraph::~AdjGraph() { }

bool AdjGraph::insert(int x, int y) {
    bool success = false;
    try {
        graph.at(x);
        graph[x].push_back(y);
        success = true;
    } catch (const std::out_of_range& ex) {
    }

    return success;
}

bool AdjGraph::remove(int x, int y) {
    bool success = false;

    try {
        graph.at(x);

        for (list<int>::iterator listit = graph[x].begin(); listit != graph[x].end(); ++listit)
        {
            if (*listit == y) {
                graph[x].erase(listit);
                success = true;
                break;
            }
        }
    } catch (const std::out_of_range& ex) {
    }

    return success;
}
