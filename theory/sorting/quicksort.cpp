#include <iostream>
#include <vector>

using namespace std;

/**
 * ALGORITHM:
 * 1 -> Choose a pivot. Move it to the end of the array.
 * 2 -> ItemFromLeft: item starting from left LARGER than pivot's value.
 *      ItemFromRight: item starting from right SMALLER than pivot's value.
 * 3 -> Repeat until ItemFromLeft has greater index than ItemFromRight.
 *      Swap ItemFromLeft with our pivot.
 */

/**
 * HOW TO CHOOSE THE PIVOT?
 * The best thing would be to choose the median of the array, but that requires O(N).
 * 1 -> Median of 3: Take 1st, medium and last element of the array.
 *                   Sort them, and take the mid one as the pivot.
 */

int partition(vector<int> &v, int low, int high) {
    int pivot = v[high];
    int itemFromLeft = low;

    for(int i=low; i < high; ++i) {
        if(v[i] < pivot) {
            swap(v[i], v[itemFromLeft]);
            ++itemFromLeft;
        }
    }
    swap(v[high], v[itemFromLeft]);
    return itemFromLeft;
}

void quicksort(vector<int> &v, int low, int high) {
    if(low < high) {
        int pivot_loc = partition(v, low, high);
        quicksort(v, low, pivot_loc-1);
        quicksort(v, pivot_loc+1, high);
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
    quicksort(v, 0, v.size()-1);
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
return 0;
}