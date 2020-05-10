#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

/**
 * Time complexity: O(V+E), V = vertices, E = edges.
 * Space complexity: O(V).
 */

vector<int> bfs(vector<list<int, int>> adjList, int origin) {
    vector<bool> visited(adjList.size(), false);
    vector<int> visitOrder;
    stack<int> dfsStack;
    dfsStack.push(origin;)
    visited[origin] = true;
    while(!dfsStack.empty()) {
        int current = dfsStack.top();
        dfsStack.pop();
        visitOrder.push_back(current);
        for(auto ady : adjList[current]) {
            if(!visited[ady]) {
                dfsStack.push(ady);
                visited[ady] = true;
            }
        }
    }
    return visitOrder;
}

int main() {

return 0;
}