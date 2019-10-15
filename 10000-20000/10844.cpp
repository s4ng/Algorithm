// 쉬운 계단 수
#include <bits/stdc++.h>
#define mod 1000000000
using namespace std;
int dp[101][10] = {};
int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				dp[i][0] = dp[i - 1][1] % mod;
			}
			else if (j == 9) {
				dp[i][9] = dp[i - 1][8] % mod;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
			}
		}
	}
	for (int i = 1; i < 10; i++) {
		sum = (sum + dp[n][i]) % mod;
	}
	cout << sum << '\n';
} 
