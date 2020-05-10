#include <iostream>
#include <vector>

using namespace std;

/**
 * 2D array of size V², where V is the number of vertices.
 * If adj[i][j] == 1, there is an edge from vertex i to j.
 * For undirected graph is always symmetric.
 * For weighted graphs, if adj[i][j] = w, then there is an
 * edge from vertex i to vertex j with weight w.
 */

/**
 * Pros:
 * -Representation is easier to implement and follow. 
 * -Removing an edge takes O(1) time.
 * -'There is an edge from vertex ‘u’ to vertex ‘v’' can be done O(1).
 */

/**
 * Cons:
 * -Space is O(V²).
 * -It wastes memory for the non existing edges.
 * -Adding vertex is O(V²) time.
 */

void undirected(vector<vector<int>> &v) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        v[i][j] = 1;
        v[j][i] = 1;
    }
    cout << endl;
}

void directed(vector<vector<int>> &v) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        v[i][j] = 1;
    }
    cout << endl;
}

void weighted_undir(vector<vector<int>> &v) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j, weight;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        cout << "Introduce the weight, int" << endl;
        cin >> weight;
        v[i][j] = weight;
        v[j][i] = weight;
    }
    cout << endl;
}

void weighted_dir(vector<vector<int>> &v) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j, weight;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        cout << "Introduce the weight, int" << endl;
        cin >> weight;
        v[i][j] = weight;
    }
    cout << endl;
}

void adj_matrix(int v) {
    cout << "Choose type of graph to represent" << endl;
    cout << "1: Undirected.\n2: Directed.\n3: Weighted undirected\n4: Weighted directed" << endl;
    int type_graph;
    cin >> type_graph;
    vector<vector<int>> matrix(v, vector<int>(v, 0));
    switch (type_graph) {
    case 1:
        undirected(matrix);
        break;
    case 2:
        directed(matrix);
        break;
    case 3:
        weighted_undir(matrix);
        break;
    case 4:
        weighted_dir(matrix);
        break;
    default:
        cout << "That option does not exist" << endl;
        break;
    }
    for(vector<int> row : matrix) {
        for(int element : row)
            cout << element << " ";
        cout << endl;
    }
}
int main() {
    int v;
    cout << "Introduce number of vertices" << endl;
    cin >> v;
    adj_matrix(v);
return 0;
}