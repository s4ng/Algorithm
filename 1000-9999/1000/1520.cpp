// 내리막 길
#include<bits/stdc++.h>
using namespace std;
int arr[501][501] = { 0 };
int dp[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int M, N;

int dfs(int x, int y){
	if(dp[x][y] != -1) return dp[x][y];
	if(x >= M && x < 0 && y >= N && y < 0) return 0;
	if(x == 0 && y == 0) return 1;

	dp[x][y] = 0;
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(arr[nx][ny] > arr[x][y])
			dp[x][y] += dfs(nx, ny);
	} 
	return dp[x][y];
} 

int main() {
	cin >> M >> N;
	for(int i = 0; i < M; i++)
		for(int j = 0; j < N; j++) cin >> arr[i][j];
	
	memset(dp, -1, sizeof(dp));
	cout << dfs(M-1, N-1) << '\n';
	return 0;
}
