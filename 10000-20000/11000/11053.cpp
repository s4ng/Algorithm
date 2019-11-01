// 가장 긴 증가하는 부분 수열
#include <bits/stdc++.h>
using namespace std;

int ar[1001];
int dp[1001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> ar[i];
	
	for (int i = 1; i <= n; i++) {
		int min = 0, count = 0;
		for (int j = 1; j < i; j++) {
			if (ar[i] > ar[j] && min < dp[j]) {
				min = dp[j];
			}
		}
		dp[i] = min + 1;
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << '\n';
}
