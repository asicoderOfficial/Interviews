#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * On each iteration, we select the smallest item
 * from the unsorted partition and move it to the sorted one.
 * We keep track of current minimum and current item.
 * Once we have scanned all the array, we swap the minimum with
 * the element at the position of the last swapped + 1.
 */

void selectionsort(vector<int> &v) {
    for(int i=0; i < v.size()-1; ++i) {
        int iMin = i;
        for(int j=i+1; j < v.size(); ++j) {
            if(v[j] < v[iMin])
                iMin = j;
        }
        if(iMin != i)
            swap(v[i], v[iMin]);
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
    selectionsort(v);
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
return 0;
}