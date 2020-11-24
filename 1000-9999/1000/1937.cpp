// 욕심쟁이 
#include<bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int woods[501][501];
int dp[501][501];
int n;

int dfs(int x, int y){
	if(dp[x][y]) return dp[x][y];
	dp[x][y] = 1;

	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx < n && nx >= 0 && ny < n && ny >= 0){
			if(woods[nx][ny] > woods[x][y]){
				dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
			} 
		} 
	} 
	return dp[x][y];
} 

int main() {
	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> woods[i][j];
	
	int MAX = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			MAX = max(dfs(i, j), MAX);
		} 
	} 
	cout << MAX << '\n';
}
