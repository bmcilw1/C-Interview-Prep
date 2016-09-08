#include "AdjGraph.h"

AdjGraph::AdjGraph() {
    Count = 0;
}

AdjGraph::AdjGraph(int length) {
    Count = 0;
}

AdjGraph::~AdjGraph() { }

void AdjGraph::Insert(int x, int y) {
    graph[x].push_back(y);
}

void AdjGraph::Remove(int x, int y) {
}
