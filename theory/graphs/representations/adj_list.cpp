#include <iostream>
#include <vector>
#include <list>
#include <utility>

using namespace std;

/**
 * Array of lists, size = V.
 * Each list contains the vertices adjacent to the vertex at position.
 * Weights can be represented in pair <vertex, weight>.
 */

/**
 * Pros:
 * -Saves space compared to adj_matrix, O(|V|+|E|) in middle case.
 * However, worst case is still O(V^2), complete graph.
 */

/**
 * Cons:
 * -'There is an edge from u to v' -> O(V), not efficient.
 */

void undirected(vector<list<int>> &matrix) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        matrix[i].push_back(j);
        matrix[j].push_back(i);
    }
    cout << endl;
}

void directed(vector<list<int>> &matrix) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        matrix[i].push_back(j);
    }
    cout << endl;
}

void weighted_undir(vector<list<pair<int, int>>> &matrix_weight) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j, weight;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        cout << "Introduce weight" << endl;
        cin >> weight;
        matrix_weight[i].push_back(make_pair(j, weight));
        matrix_weight[j].push_back(make_pair(i, weight));
    }
    cout << endl;
}

void weighted_dir(vector<list<pair<int, int>>> &matrix_weight) {
    cout << "Introduce number of edges in the graph" << endl;
    int edges, i, j, weight;
    cin >> edges;
    ++edges;
    while(--edges) {
        cout << "Introduce 1st vertex" << endl;
        cin >> i;
        cout << "Introduce 2nd vertex" << endl;
        cin >> j;
        cout << "Introduce weight" << endl;
        cin >> weight;
        matrix_weight[i].push_back(make_pair(j, weight));
    }
    cout << endl;
}

void adj_list(int v) {
    cout << "Choose type of graph to represent" << endl;
    cout << "1: Undirected.\n2: Directed.\n3: Weighted undirected\n4: Weighted directed" << endl;
    int type_graph;
    cin >> type_graph;
    vector<list<int>> matrix;
    vector<list<pair<int, int>>> matrix_weight;
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
        adj_matrix(v);
        break;
    } 
    if(type_graph == 1 || type_graph == 2) {
        for(list<int> row : matrix) {
            for(int element : row)
                cout << element << " ";
        cout << endl;
        }
    }else if(type_graph == 3 || type_graph == 4) {
        for(list<int> row : matrix) {
            for(pair<int, int> element : row) {
                cout << element.first << " -> " << element.second;
            }
            cout << endl;
        }
    }
}

int main() {
    int v;
    cout << "Introduce number of vertices" << endl;
    cin >> v;
    adj_list(v);

return 0;

}