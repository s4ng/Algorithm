// 2xn 타일링
#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
  // 피보나치 수열과 같다
	dp[1] = 1; dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[n] % 10007 << '\n';
}
