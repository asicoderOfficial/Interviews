#include <iostream>
#include <math.h>

using namespace std;

int main() {
string s;
long long n, res = 0;
getline(cin, s);
cin >> n;
if(s.size() == 1  && s[0] == 'a')
	cout << n << endl;
else {
		for(long long i=0; i < s.size(); ++i) {
			if(s[i] == 'a') {
				res++;
				if(i == 0) { res += n / s.size();}
				else {
				res += n / s.size() - s.size() % i;
				}
			}
		}
}
cout << res << endl;

return 0;
}
