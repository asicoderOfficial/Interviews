#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
int n, a, res = 0;
vector <int> v;
unordered_map<int, int> um;
cin >> n;
for(int i=0; i < n; ++i) {
	cin >> a;
	v.push_back(a);
	um[a] = i;
}

for(int i=0; i < n; ++i) {
	if(v[i] != i+1) {
		int auxv = v[i], auxum = um[i+1];
		swap(v[um[i+1]], v[i]);
		um[i+1] = i;
		um[auxv] = auxum;
		res++;
	}
}	
cout << res << endl;

return 0;
}
