#include <iostream>
#include <list>

using namespace std;

int find_middle_element(list<int> l) {
    int iteration = 0;
    list<int> middle = l.begin();
    for(auto it = l.begin(); it != l.end(); ++it) {
        
    }
}

int main() {
    cout << "Introduce length of list" << endl;
    int n, a;
    cin >> n;
    list<int> l;
    while(n--) {
        cin >> a;
        l.push_back(a);
    }
    cout << find_middle_element(l) << endl;
}