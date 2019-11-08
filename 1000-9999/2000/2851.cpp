// 슈퍼 마리오
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int mush[10];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int sum = 0, afterSum = 0;
	for (int i = 0; i < 10; i++) 
		cin >> mush[i];
	
	for (int i = 0; i < 10; i++) {
		afterSum = sum + mush[i];
		if (afterSum >= 100) {
			if (afterSum - 100 <= 100 - sum) {
				cout << afterSum << '\n';
			}
			else {
				cout << sum << '\n';
			}
			return 0;
		}
		sum = afterSum;
	}
	cout << sum << '\n';
}
