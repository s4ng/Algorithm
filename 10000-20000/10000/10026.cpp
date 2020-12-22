// 
#include<bits/stdc++.h>
using namespace std;
char arr[101][101];
bool visited[101][101];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n;

int BFS(int x, int y, bool isColorWeak){
	queue<pair<int, int>> q;
	q.push({x, y});
	visited[x][y] = 1;
	char nowColor = arr[x][y];
	
	while(!q.empty()){
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for(int i = 0; i < 4; i++){
			int nx = nowX + dx[i];
			int ny = nowY + dy[i];
			if(!visited[nx][ny]){
				if(nx >= 0 && nx < n && ny >= 0 && ny < n){
					if(isColorWeak){
						if(nowColor == 'R' || nowColor == 'G'){
							if(arr[nx][ny] == 'R' || arr[nx][ny] == 'G'){
								q.push({nx, ny});
								visited[nx][ny] = 1;
							} 
						} else {
							if(nowColor == arr[nx][ny]){
								q.push({nx, ny});
								visited[nx][ny] = 1;
							} 
						} 
					} else {
						if(nowColor == arr[nx][ny]){
							q.push({nx, ny});
							visited[nx][ny] = 1;
						} 
					} 
				} 
			} 
		} 
	} 
	return 0;
} 

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin >> arr[i][j];
	
	int notColorWeak = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j]){
				BFS(i, j, false);		
				notColorWeak++;
			} 
		} 
	} 

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) visited[i][j] = 0;

	int colorWeak = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j]){
				BFS(i, j, true);
				colorWeak++;
			} 
		} 
	} 
	
	cout << notColorWeak << '\n' << colorWeak << '\n';
}
