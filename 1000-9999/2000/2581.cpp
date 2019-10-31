// 소수
#include <bits/stdc++.h>
using namespace std;

bool aris[10001] = { 0, 0, };
vector<int> prime;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	memset(aris, true, sizeof(aris));
	int m, n, first = 0, sum = 0;
	bool isExist = false;

	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		if (aris[i] == 1) {
			prime.push_back(i);
			for (int j = i*2; j <= n; j += i) {
				aris[j] = 0;
			}
		}
	}
	
	for (int i = 0; i < prime.size(); i++) {
		if (prime[i] >= m && prime[i] <= n) {
			if (first == 0)
				first = prime[i];
			sum += prime[i];
		}
	}
	if (sum == 0) {
		cout << -1 << '\n';
		return 0;
	}
	cout << sum << '\n' << first << '\n';
}
