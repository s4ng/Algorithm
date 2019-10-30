// 정수 삼각형
#include <bits/stdc++.h>
using namespace std;

int dp[501][501];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, ans = 0, index;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= i; j++) 
			cin >> dp[i][j];
		
	for (int i = 2; i <= n; i++) 
		for (int j = 1; j <= i; j++) 
			dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);

	for (int i = 1; i <= n; i++) 
		if (dp[n][i] > ans)
			ans = dp[n][i];

	cout << ans << '\n';
}
