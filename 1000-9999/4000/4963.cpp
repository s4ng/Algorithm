// 섬의 개수
#include<bits/stdc++.h>
using namespace std;
int Map[51][51] = { 0 };
bool visited[51][51] = { 0 };
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int N, M;

void DFS(int n, int m){
	if(!Map[n][m] || visited[n][m])
		return;
	visited[n][m] = true;
	for(int i = 0; i < 8; i++){
		int nextX = n + dx[i];
		int nextY = m + dy[i];
		if(nextX < N && nextX >= 0 && nextY < M && nextY >= 0){
			DFS(nextX, nextY);
		} 
	} 
} 

int main() {
	while(true){
		int count = 0;
		cin >> M >> N;
		if(N == 0 && M == 0)
			break;
		for(int i = 0; i < N; i++)
			for(int j = 0; j < M; j++){
				cin >> Map[i][j];
				visited[i][j] = false;
			}
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(Map[i][j] == 1 && !visited[i][j]){
					count++;
					DFS(i, j);
				} 
			} 
		} 
		cout << count << '\n';
	} 
}
