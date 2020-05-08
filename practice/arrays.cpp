#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> v;

int missing() {
    int total = (100 * 101) / 2, sum = 0;
    for(int num : v) {
        sum += num;
    }
    return total - sum;
}

int duplicates() {
    map<int, int> m;
    for(int num : v) {
        if(m.find(num) != m.end())
            return num;
        m[num] = 1;
    }
}

int pairsSum() {
    
}

int main() {
    int i;
    string s;
    cin >> i;
    getline(cin, s);
    switch(i) {
        case 1: {
            int a;
            for(int i=1; i <= 100; ++i) {
                cin >> a;
                v.push_back(a);
            }
            cout << missing(v) << endl;
        }
        case 2: {
            int a, b;
            cin << a;
            while(a--) {
                cin >> b;
                v.push_back(b);
            }
            cout << duplicates() << endl;
        }
        case 3: {
            int a, b;
            cin << a;
            while(a--) {
                cin >> b;
                v.push_back(b);
            }
        }
    }
return 0;
}