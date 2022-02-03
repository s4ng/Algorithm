// 안전 영역
#include<bits/stdc++.h>
using namespace std;

int area[101][101] = { 0 };
bool visited[101][101] = { 0 };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int n, maxLevel = -1;
void clearVisited() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			visited[i][j] = false;
		} 
	} 
} 

stack<pair<int, int>> st;
int dfs(int level) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(area[i][j] <= level || visited[i][j] == true)
				continue;
			st.push({i, j});
			visited[i][j] = true;
			while(!st.empty()) {
				int nowX = st.top().first;
				int nowY = st.top().second;
				st.pop();
				visited[nowX][nowY] = true;

				for(int k = 0; k < 4; k++) {
					int nx = nowX + dx[k];
					int ny = nowY + dy[k];

					if(nx < n && nx >= 0 && ny < n && ny >= 0) {
						if(visited[nx][ny] != true && area[nx][ny] > level) {
							st.push({nx, ny});
						} 
					} 
				} 
			} 
			count++;
		} 
	} 
	clearVisited();
	return count;
} 

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> area[i][j];
			if(area[i][j] > maxLevel)
				maxLevel = area[i][j];
		} 
	} 

	int maxArea = -1;
	for(int level = 0; level <= maxLevel; level++) {
		int area = dfs(level);
		if(area > maxArea)
			maxArea = area;
	} 

	cout << maxArea << '\n';
}
