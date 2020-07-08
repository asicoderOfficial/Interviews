#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
int n, res = 0, a;
cin >> n;
unordered_map<int, int> um;

while(n--) {
	cin >> a;
	if(um.find(a) != um.end()) {
		um[a]++;
		if(um[a] % 2 == 0)
			++res;
	}else {
		um[a] = 1;
	}
}
cout << res << endl;
return 0;
}
