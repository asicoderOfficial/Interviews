#include <iostream>
#include <vector>

using namespace std;

/**
 * 1 -> Divide the array into half parts until you get to have each element
 *      in a temporary array.
 * 2 -> Reverse the process, comparing the elements and sorting each sub array.
 */

//Function to combine the arrays.
vector<int> merge(vector<int> &a, vector<int> &b) {
    vector<int> c;

    while(!a.empty() && !b.empty()) {
        if(a[0] > b[0]) {
            c.push_back(b[0]);
            b.erase(b.begin());
        }else {
            c.push_back(a[0]);
            a.erase(a.begin());
        }
    }
    
    //A or B is empty.
    while(!a.empty()) {
        c.push_back(a[0]);
        a.erase(a.begin());
    }
    while(!b.empty()) {
        c.push_back(b[0]);
        b.erase(b.begin());
    }
    return c;
}

//Recursive function to divide.
vector<int> mergesort(vector<int> &a) {
    if(a.size() == 1)
        return a;

    vector<int> tempOne, tempTwo;
    for(int i=0; i <= a.size()/2; ++i) {
        tempOne.push_back(a[i]);
    }
    for(int i=(a.size()/2) + 1; i < a.size(); ++i) {
        tempTwo.push_back(a[i]);
    }
    tempOne = mergesort(tempOne);
    tempTwo = mergesort(tempTwo);

    return merge(tempOne, tempTwo);
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
    mergesort(v);
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
return 0;
}