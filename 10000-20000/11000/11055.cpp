// 가장 큰 증가 부분 수열
#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int dp[1001];

int main(){
	int n, maxN = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	for(int i = 0; i < n; i++){
		dp[i] = arr[i];
		for(int j = 0; j < i; j++){
			if(arr[j] < arr[i] && dp[i] < arr[i] + dp[j])
				dp[i] = arr[i] + dp[j];
		} 
		maxN = max(maxN, dp[i]);
	} 
	cout << maxN << '\n';
}
