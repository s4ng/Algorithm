// 알파벳
#include<bits/stdc++.h>
using namespace std;
char board[21][21];
bool visited[26];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int r, c, ans = 0;

void dfs(int x, int y, int cnt){
	ans = max(ans, cnt);
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx >= 0 && nx < r && ny >= 0 && ny < c){
			if(visited[board[nx][ny] - 'A'] == false){
				visited[board[nx][ny] - 'A'] = true;
				dfs(nx, ny, cnt + 1);
				visited[board[nx][ny] - 'A'] = false;
			} 
		} 
	} 
} 

int main() {
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> board[i][j];
		} 
	} 
	
	visited[board[0][0] - 'A'] = true;
	dfs(0, 0, 1);
	
	cout << ans << '\n';
}
