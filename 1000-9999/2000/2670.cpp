// 연속부분합
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double arr[10001] = {0.f};
	double dp[10001] = {0.f};
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	} 

	dp[0] = arr[0];
	double maxResult = -1;
	for(int i = 1; i < n; i++) {
		dp[i] = max(arr[i], dp[i - 1] * arr[i]);
		maxResult = max(dp[i], maxResult);
	} 
	printf("%.3f", maxResult);
}
