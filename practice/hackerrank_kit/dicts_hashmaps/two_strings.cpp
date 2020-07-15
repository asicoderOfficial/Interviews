#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
string a, b;
int n;
cin >> n;
getline(cin, a);
while(n--) {
	getline(cin, a);
	getline(cin, b);
	unordered_map<char, int> uma;
	for(char c : a) {
		if(uma.find(c) != uma.end())
			uma[c]++;
		else
			uma[c] = 1;
	}
	int i = 0;
	while(i < b.size() && uma.find(b[i]) == uma.end())
		++i;
	if(i == b.size()) cout << "NO" << endl;
	else			cout << "YES" << endl;
}
return 0;
}
