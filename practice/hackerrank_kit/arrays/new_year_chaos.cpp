#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
int ntc, n, a;
vector<int> q;
cin >> ntc;
while(ntc--) {
	cin >> n;
	int res = 0;
	bool chaotic = false;
	for(int i=0; i < n; ++i) {
		cin >> a;
		q.push_back(a);
	}
	int totalBribes = 0;
    
    int expectedFirst = 1;
    int expectedSecond = 2;
    int expectedThird = 3;
    
    for (unsigned int i = 0; i < q.size(); ++i) {
        if (q[i] == expectedFirst) {
            expectedFirst = expectedSecond;
            expectedSecond = expectedThird;
            ++expectedThird;
        } else if (q[i] == expectedSecond) {
            ++totalBribes;
            expectedSecond = expectedThird;
            ++expectedThird;
        } else if (q[i] == expectedThird) {
            totalBribes += 2;
            ++expectedThird;
        } else {
            chaotic = true;
        }
    }
    
	if(!chaotic)    cout << totalBribes << endl;
	else   cout << "Too chaotic" << endl;
}
return 0;
}
