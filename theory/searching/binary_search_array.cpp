#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int iteration = 1;

//Recursive approach.
bool binarysearch_rec(vector<int> v, int left, int right, int num) {
    cout << "Iteration number " << iteration << "\nLeft = " << left << "\nRight = " << right << endl;
    if(v.empty() || v[0] > num || v[v.size()-1] < num)
        return false;
    else {
        if(right >= left) {
            int middle = (left + right) / 2;
            cout << "Middle = " << middle << endl << endl;
            if(v[middle] == num)
                return true;
            else if(v[middle] > num)
                return binarysearch_rec(v, left, middle - 1, num);
            return binarysearch_rec(v, middle + 1, right, num);
        }
    } 
    return false;
}

//Iterative approach.
bool binarysearch_it(vector<int> v, int left, int right, int num) {
    cout << "Iteration number " << iteration << "\nLeft = " << left << "\nRight = " << right << endl;
    if(v.empty() || v[0] > num || v[v.size()-1] < num)
        return false;
    else {
        while(right >= left) {
            int middle = (right + left) / 2;
            cout << "Middle = " << middle << endl << endl;
            if(v[middle] == num)
                return true;
            else if(v[middle] > num)
                right = middle - 1;
            else
                left = middle + 1;        
        }
    }
    return false;
}

int main() {
    cout << "Introduce length and array of ints" << endl;
    int n, a, num;
    cin >> n;
    vector<int> v;
    while(n--) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << "Introduce number to search for" << endl;
    cin >> num;
    cout << (bool)binarysearch_rec(v, 0, v.size()-1, num) << endl;
return 0;
}