// 2xn 타일링 2
#include <bits/stdc++.h>
using namespace std;
long long dp[1001];
int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	
	dp[1] = 1; dp[2] = 3;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]*2) % 10007;
	}
	
	cout << dp[n]%10007 << '\n';
}
