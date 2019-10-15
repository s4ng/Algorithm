//오르막 수
#include <bits/stdc++.h>
using namespace std;

int dp[1001][10] = { {0}, {1,1,1,1,1,1,1,1,1,1} };
int main(){
	// 입출력 가속화 -----
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, sum = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k] %10007;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sum += dp[n][i]%10007;
	}
	cout << sum % 10007 << '\n';
}
/* 또다른 풀이
#include <bits/stdc++.h>
using namespace std;
int main(){
	// 입출력 가속화 -----
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, ans = 1; cin>>n;
	for (int i = 1; i <= 9; ++i)
		ans = ans * (n + i) % 10007;
	cout << ans * 6995 % 10007<<'\n';
	return 0;
}
*/
