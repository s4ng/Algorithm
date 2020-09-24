// 토마토
#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, days = 1;
int a[1001][1001];
bool visit[1001][1001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(){
	queue<pair<pair<int, int>, int>> q;
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1){
				q.push({{i, j}, 0});
				visit[i][j] = true;
			}
		} 
	} 

	while(!q.empty()){
		int x = q.front().first.first;
		int y = q.front().first.second;
		cnt = q.front().second;

		q.pop();
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(nx < 0 || nx >= m || ny >= n || ny < 0) continue;
			if(a[nx][ny] == 0 && !visit[nx][ny]){
				visit[nx][ny] = true;
				q.push({{nx, ny}, cnt + 1});
			} 
		} 
	} 

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 0 && !visit[i][j]){
				cnt = -1;
				break;
			}
		} 
	} 

	cout << cnt << '\n';
}
