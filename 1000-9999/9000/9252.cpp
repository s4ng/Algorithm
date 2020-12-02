// LCS 2
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int dp[MAX + 1][MAX + 1] = { 0 };

int main() {
	string s1, s2, ans;
	cin >> s1 >> s2;
	for(int i = 1; i <= s1.size(); i++){
		for(int j = 1; j <= s2.size(); j++){
			if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		} 
	} 
	int i = s1.size();
	int j = s2.size();
	while(dp[i][j]) {
		int now = dp[i][j];
		if(dp[i-1][j] == now - 1 && dp[i][j-1] == now - 1){
			ans += s1[i-1]; 
			i--; 
			j--;
		} else if (dp[i-1][j] == now - 1 && dp[i][j-1] == now) j--;
		else if (dp[i-1][j] == now) i--;
	} 
	reverse(ans.begin(), ans.end());
	cout << dp[s1.size()][s2.size()] << '\n';
	cout << ans << '\n';
}
