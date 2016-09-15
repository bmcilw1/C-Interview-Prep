#include "AdjGraph.h"

AdjGraph::AdjGraph(int length) {
    graph.resize(length);
    visited.resize(graph.size());
    edgeCount = 0;
}

AdjGraph::~AdjGraph() { }

bool AdjGraph::insert(int x, int y) {
    bool success = false;
    try {
        graph.at(x);
        graph[x].push_back(y);
        success = true;
        ++edgeCount;
    } catch (const std::out_of_range& ex) {
    }

    return success;
}

bool AdjGraph::remove(int x, int y) {
    bool success = false;

    try {
        graph.at(x);

        for (std::list<int>::iterator listit = graph[x].begin(); listit != graph[x].end(); ++listit)
        {
            if (*listit == y) {
                graph[x].erase(listit);
                success = true;
                --edgeCount;
                break;
            }
        }
    } catch (const std::out_of_range& ex) {
    }

    return success;
}

bool AdjGraph::searchDFS(int v) {
    bool success = false;
    try {
        for (std::vector<bool>::iterator i = visited.begin(); i != visited.end(); ++i) {
            *i = false;
        }
        visited.at(v);
        dfs(v);
        success = true;
    } catch (const std::out_of_range& ex) {
    }
    return success;
}

void AdjGraph::dfs(int v) {
    visited[v] = true;
    orderVisited.push(v);

    for (std::list<int>::iterator i = graph[v].begin(); i != graph[v].end(); ++i) {
        if (!visited[*i]) {
            dfs(*i);
        }
    }
}

bool AdjGraph::searchBFS(int v) {
    bool success = false;
    std::queue<int> q;

    try {
        for (std::vector<bool>::iterator i = visited.begin(); i != visited.end(); ++i) {
            *i = false;
        }
        visited.at(v);
        q.push(v);

        while (!q.empty()) {
            v = q.front();
            q.pop();

            visited[v] = true;
            orderVisited.push(v);

            for (std::list<int>::iterator children = graph[v].begin(); children != graph[v].end(); ++children) {
                if (!visited[*children]) {
                    q.push(*children);
                }
            }
        }
        
        success = true;
    } catch (const std::out_of_range& ex) {
    }
    return success;
}
