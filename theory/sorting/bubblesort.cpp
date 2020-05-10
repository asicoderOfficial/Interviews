#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * We compare consecutive items.
 * If they are out of place, we swap them.
 * O(n²) time complexity, taking n as the array's length.
 */

void bubblesort(vector<int> &v) {
    if(v.size() > 1) {
        for(int i=1; i < v.size(); ++i) {
            for(int j=0; j < v.size()-1; ++j) {
                if(v[j] > v[j+1])
                    swap(v[j], v[j+1];)
            }
        }
    }
}

int main() {
    cout << "Introduce length and array of ints" << endl;
    int n, a;
    cin >> n;
    vector<int> v;
    while(n--) {
        cin >> a;
        v.push_back(a);
    }
    bubblesort(v);
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
return 0;
}