#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

/**
 * Time complexity: O(V+E), V = vertices, E = edges.
 * Space complexity: O(V).
 */

vector<int> bfs(vector<list<int, int>> adjList, int origin) {
    vector<bool> visited(adjList.size(), false);
    vector<int> visitOrder;
    queue<int> bfsQueue;
    bfsQueue.push(origin);
    visited[origin] = true;
    while(!bfsQueue.empty()) {
        int current = bfsQueue.front();
        bfsQueue.pop();
        visitOrder.push_back(current);
        for(auto ady : adjList[current]) {
            if(!visited[ady]) {
                bfsQueue.push(ady);
                visited[ady] = true;
            }
        }
    }
    return visitOrder;
}

int main() {

return 0;
}