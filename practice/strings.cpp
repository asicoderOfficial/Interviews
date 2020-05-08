#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

string reverseString(string s);
string reverseStringXOR(string s);
void duplicateChars(string s);
void anagrams(string a, string b);
void allPerms(string s, int start, int end);
void reverseRecursive(string s, int start, int end);
int lengthSubsNonRep(string s);
string longesPalindrom(string s);

int main() {
    cout << "Introduce number of option" << endl;
    int a;
    cin >> a;
    switch(a) {
        case 1: {
            //Reverse string, temporary variable.
            string s;
            getline(cin, s);
            getline(cin, s);
            cout << reverseString(s) << endl;
            break;
        }
        case 2: {
            //Reverse string, XOR
            string s;
            getline(cin, s);
            getline(cin, s);
            cout << reverseStringXOR(s) << endl;
            break;
        }
        case 3: {
            //Duplicate chars
            string s;
            getline(cin, s);
            getline(cin, s);
            duplicateChars(s);
            break;
        }
        case 4: {
            //Anagrams
            string a, b;
            getline(cin, a);
            getline(cin, a);
            getline(cin, b);
            anagrams(a, b);
            break;
        }
        case 5: {
            //Permutations
            string s;
            getline(cin, s);
            getline(cin, s);
            allPerms(s, 0, s.length()-1);
            break;
        }
        case 6: {
            //Reverse recursively
            string s;
            getline(cin, s);
            getline(cin, s);
            reverseRecursive(s, 0, s.length()-1);
            break;
        }
        case 7: {
            string s;
            getline(cin, s);
            getline(cin, s);
            cout << lengthSubsNonRep(s) << endl;
            break;
        }
        case 8: {
            string s;
            getline(cin, s);
            getline(cin, s);
            cout << longesPalindrom(string s) << endl;
            break;
        }
        default:
            cout << "No option for that number" << endl;
    }
return 0;
}

//Reverse string, temporary variable. O(N) time, O(1) space.
string reverseString(string s) {
    if(s.length() <= 1) 
        return s; 
    else {
        int i = 0, j = s.length()-1;
        char t;
        while(i < j) {
            t = s[i];
            s[i] = s[j];
            s[j] = t;
            ++i;
            --j;
        }
        return s;
    }
}

//Reverse string, XOR. O(N) time, O(1) space.
string reverseStringXOR(string s) {
    if(s.length() <= 1) 
        return s; 
    else {
        int i = 0, j = s.length()-1;
        while(i < j) {
            s[i] ^= s[j];
            s[j] ^= s[i];
            s[i] ^= s[j];
            ++i;
            --j;
        }
        return s;
    }
}

//Get all duplicate chars of string
void duplicateChars(string s) {
    map<char, int> m;
    for(auto i = s.begin(); i != s.end(); i++) {
        if(m.find(*i) != m.end())
            cout << *i << endl;
        else
            m[*i] = 1;
    }
}

//Check if strings are anagrams.
void anagrams(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << (a == b) << endl;
}

//Get all permutations of string. Recursive.
//O(n*n!), there are n! permutations, and each requires O(n).
void allPerms(string s, int start, int end) {
    //Base case.
    if(start == end) {
        cout << s << endl;
    }else {
        for(int i=start; i <= end; ++i) {
            swap(s[start], s[i]);
            allPerms(s, start+1, end);
        }
    }
}

//Reverse string recursively.
void reverseRecursive(string s, int start, int end) {
    if(start == end) {
        cout << s << endl;
    }else if(abs(start-end) == 1){
        swap(s[start], s[end]);
        cout << s << endl;
    }else{
        swap(s[start], s[end]);
        reverseRecursive(s, start+1, end-1);
    }
}

//Length of longest substring without repeating chars.
//Time O(n + c), c = number of chars
//Space O(c)
int lengthSubsNonRep(string s) {
    if(s.length() == 0) {
        return 0;
    }else {
        map<char, int> m;
        int res = 0, prev=0;
        for(int i=0; i < s.length(); ++i) {
            if(m.find(s[i]) != m.end()) {
                prev = max(prev, m[s[i]] + 1);
            }
            m[s[i]] = i;
            res = max(res, i - prev + 1);
        }
        return res;
    }
}

//Longest palindromic substring.
//Time
//Space
string longesPalindrom(string s) {

}