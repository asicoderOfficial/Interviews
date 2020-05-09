#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool binarysearch(string s, int left, int right, char c) {
    if(left <= right) {
        int middle = (left + right) / 2;
        if(s[middle] == c)
            return true;
        else if(int(s[middle]) > int(c))
            return binarysearch(s, middle + 1, right, c);
        else 
            return binarysearch(s, left, middle-1, c);
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;
    cout << binarysearch(s, 0, s.size()-1, c) << endl;
return 0;
}