#include <iostream>
#include <string>

using namespace std;

int main() {
int n, prev, curr=0, res = 0;
string s;
cin >> n;
getline(cin, s);
getline(cin, s);
for(char c : s) {
	prev = curr;
	if(c == 'D') {
		curr--;
	}else {
		curr++;
	}
	if(curr == 0 && prev == -1)
		res++; 
}
cout << res << endl;
return 0;
}
