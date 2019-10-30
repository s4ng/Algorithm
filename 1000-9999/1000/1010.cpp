// 다리 놓기
#include <bits/stdc++.h>
using namespace std;

int dp[31][31];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	for (int i = 1; i <= 31; i++) {
		dp[1][i] = i;
	}
	for (int i = 2; i < 31; i++) {
		for (int j = 1; j < 31; j++) {
			for (int k = i - 1; k <= j - 1; k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}
	while (T--) {
		int n, m;
		cin >> n >> m;
		cout << dp[n][m] << '\n';
	}
}
