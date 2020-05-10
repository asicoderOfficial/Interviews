#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * HEAP: Ordered binary tree.
 * -Max heap: parent's value > child's value.
 */

/**
 * 1 -> Create max heap.
 * 2 -> Remove largest item.
 * 3 -> Place item in sorted partition.
 */

//Creates max heap from unsorted array.
//Time complexity: O(n)
void buildMaxHeap(vector<int> &v) {
    for(int i=v.size()/2; i >= 1; ++i) {
        heapify(v, i);
    }
}

//Creates the heap.
//Time complexity: O(log n), called n-1 times.
void heapify(vector<int> &v, int first) {
    int left = 2 * first;
    int right = 2 * first + 1;
    int max;
    if(left <= v.size() && v[left] > v[first])
        max = left;
    else
        max = first;
    
    if(right <= n && v[right] > v[max])
        max = right;
    if(max != first) {
        swap(v[first], v[max]);
        heapify(v, max);
    }
}

void heapsort(vector<int> &v) {
    buildMaxHeap(v);
    for(int i=v.size()-1; i >= 1; ++i) {
        swap(v[1], v[i]);
        heapify(v, 1);
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