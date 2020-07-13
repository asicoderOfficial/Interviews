#include <iostream>
#include <vector>

using namespace std;

int main() {
int n, a, b;
cin >> n >> a;
vector<int> v;
while(n--) {
	cin >> b;
	v.push_back(b);
}
for(int i=a; i < v.size() + a; ++i) {
	cout << v[i % v.size()] << " ";
}
cout << endl;
return 0;
}
