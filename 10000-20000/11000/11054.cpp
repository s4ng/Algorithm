// 가장 긴 바이토닉 부분 수열
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int a[1001];
int dp[2][1001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++) {
		int maxA = 0;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j])
				if (maxA < dp[0][j])
					maxA = dp[0][j];
		}
		dp[0][i] = maxA + 1;
	}

	for (int i = n; i >=1; i--) {
		int maxA = 0;
		for (int j = n; j > i; j--) {
			if (a[i] > a[j])
				if (maxA < dp[1][j])
					maxA = dp[1][j];
		}
		if (dp[1][i] < maxA + 1)
			dp[1][i] = maxA + 1;
	}
	for (int i = 1; i <= n; i++) {
		if (max < dp[0][i] + dp[1][i])
			max = dp[0][i] + dp[1][i];
	}

	cout << max - 1 << '\n';
}
