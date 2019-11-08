// 스티커
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int st[2][100001];
int dp[2][100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;

		for (int i = 0; i < 2; i++) 
			for (int j = 0; j < n; j++) 
				cin >> st[i][j];
			
		dp[0][0] = st[0][0];
		dp[1][0] = st[1][0];
		dp[0][1] = st[0][1] + dp[1][0];
		dp[1][1] = st[1][1] + dp[0][0];

		for (int i = 2; i < n; i++) {
			dp[0][i] = st[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = st[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
		}
		cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
	}
}
