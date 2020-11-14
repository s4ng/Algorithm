// 공통 부분 문자열
#include<bits/stdc++.h>
using namespace std;
int dp[4001][4001] = { 0 };

int main() {
	int maxNum = 0;
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.length(); i++){
		for(int j = 0; j < b.length(); j++){
			if(a[i] == b[j]){
				if(i == 0 || j == 0){
					dp[i][j] = 1;
					maxNum = max(maxNum, dp[i][j]);
					continue;
				} 
				dp[i][j] = dp[i-1][j-1] + 1;
				maxNum = max(maxNum, dp[i][j]);
			} 
		} 
	} 
	cout << maxNum << '\n';
}
