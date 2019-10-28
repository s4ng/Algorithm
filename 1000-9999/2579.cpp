// 계단 오르기
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	int stair[305] = {};
	int dp[305] = {};
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> stair[i];
	for (int i = 1; i <= 3 && i <= n; i++) {
		if (i != 3)
			dp[i] = dp[i - 1] + stair[i];
		else
			dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1]);
	}
	
	for (int i = 4; i <= n; i++)
		dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1] + dp[i - 3]);

	cout << dp[n] << '\n';
}
