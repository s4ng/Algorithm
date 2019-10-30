// 1, 2, 3 더하기 
#include <bits/stdc++.h>
using namespace std;
int dp[12];
int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	while (q--) {
		int n;
		cin >> n;
		if (n <= 2) {
			cout << (n == 2 ? dp[2] : dp[1]) << '\n';
			continue;
		}
		for (int i = 3; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[n] << '\n';
	}
}
