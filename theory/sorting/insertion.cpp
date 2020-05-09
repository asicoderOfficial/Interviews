#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * 1 -> Iterate from left to right.
 * 2 -> Examine each item and compare it to the items
 *      on its left.
 * 3 -> Insert the item in the correct position of the array.
 */

//Worst case -> Time complexity: O(n^2), for n = size of array.
//That would be an array in decreasing order.
vector<int> insertionsort(vector<int> &v) {
    if(v.size() <= 1)
        return v;
    else {
        for(int i=1; i < v.size(); ++i) {
            int j = i;
            while(j > 0 && v[j-1] > v[j]) {
                swap(v[j], v[j-1]);
                --j;
            }
        }
    }
    return v;
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
    v = insertionsort(v);
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
return 0;
}