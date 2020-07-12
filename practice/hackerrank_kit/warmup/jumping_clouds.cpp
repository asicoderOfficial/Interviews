#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, a, res = 0;
	vector<int> v;
	cin >> n;
	while(n--) {
		cin >> a;
		v.push_back(a);
	}
	if(v.size() == 2)
		res = 1;
	else {
		int i = 0;
		while(i < v.size() - 1) {
			if(v[i+2] == 0) { res++; i += 2; }
			else { res++; i++; }
		}
	}
	cout << res << endl;		
return 0;
}
