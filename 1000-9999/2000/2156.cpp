// 포도주 시식
#include <bits/stdc++.h>
using namespace std;

int wine[10001];
int dp[10001];

int Max(int a, int b, int c) {
	return max(max(a, b), c);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> wine[i];
	
	for (int i = 1; i <= 2 && i <= n; i++) {
		if (i == 1)
			dp[i] = wine[i];
		else
			dp[i] = wine[i] + wine[i - 1];
	}

	for (int i = 3; i <= n; i++) {
		dp[i] = Max(dp[i - 1], wine[i] + dp[i - 2], wine[i] + wine[i - 1] + dp[i - 3]);
	}

	cout << dp[n] << '\n';
}
