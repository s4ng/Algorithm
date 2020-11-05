// 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
long dp[201][201] = {0};

int main(){
	int n, k, mod = 1000000000;
	cin >> n >> k;
	for(int i = 0; i <= n; i++) dp[1][i] = 1;

	for(int i = 2; i <= k; i++){
		for(int j = 0; j <= n; j++){
			for(int l = 0; l <= j; l++) dp[i][j] += dp[i-1][l];
			dp[i][j] %= mod;
		} 
	} 

	cout << dp[k][n] << '\n';
	return 0;
} 
