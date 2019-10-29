// RGB 거리
#include <bits/stdc++.h>
using namespace std;

int dp[1001][3] = { 0, };
int cost[1001][3] = { 0, };

int Min(int a, int b, int c) {
	return min(min(a, b), c);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

	dp[1][0] = cost[1][0];
	dp[1][1] = cost[1][1];
	dp[1][2] = cost[1][2];
	
	for (int i = 2; i <= n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + cost[i][2];
	}
	cout << Min(dp[n][0], dp[n][1], dp[n][2]) << '\n';
}
