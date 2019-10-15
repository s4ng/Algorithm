//부녀회장이 될테야
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int q, k, n;
	cin >> q;
	while (q--) {
		int dp[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		cin >> k >> n;
		for (int i = 1; i <= k; i++) {
			for (int j = 2; j <= n; j++) {
				dp[j] = dp[j] + dp[j - 1];
			}
		}
		cout << dp[n] << '\n';
	}
}
