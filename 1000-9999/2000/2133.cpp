// 타일 채우기
#include<bits/stdc++.h>
using namespace std;
int dp[31];

int main(){
	int n;
	cin >> n;
	dp[0] = 1;
	dp[2] = 3;
	if(n % 2 == 1){
		cout << 0 << '\n';
		return 0;
	} 

	for(int i = 4; i <= n; i+=2){
		dp[i] = dp[i-2] * 3;
		for(int j = 4; j <= i; j+=2){
			dp[i] += dp[i-j] * 2;
		} 
	} 
	cout << dp[n] << '\n';
}
