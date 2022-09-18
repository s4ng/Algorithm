// 아기 상어
#include<bits/stdc++.h>
using namespace std;

int board[21][21] = { 0 };
int check[21][21] = { 0 };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {

	int n;
	cin >> n;

	int sharkX, sharkY;
	int sharkSize = 2;
	int eatfish = 0;
	int second = 0;

	for(int i = 0; i < n; i++) {
		for( int j = 0; j < n; j++ ) {
			cin >> board[i][j];
			if(board[i][j] == 9) {
				sharkX = i;
				sharkY = j;
			} 	
		} 
	} 

	while(1) {

		for(int i = 0; i < n; i++) 
			for(int j = 0; j < n; j++) 
				check[i][j] = -1;

		check[sharkX][sharkY] = 0;
		board[sharkX][sharkY] = 0;

		queue<pair<int, int>> q;
		vector<pair<int, int>> fish;

		if(eatfish >= sharkSize) {
			eatfish -= sharkSize;
			sharkSize++;
		} 

		q.push({sharkX, sharkY});

		while(!q.empty()) {
			auto cur = q.front();
			q.pop();
			for(int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
				if(check[nx][ny] != -1) continue;
				if(board[nx][ny] > sharkSize) continue;

				else if(board[nx][ny] == sharkSize || board[nx][ny] == 0) {
					check[nx][ny] = check[cur.first][cur.second] + 1;
					q.push({nx, ny});
				} 
				else if(board[nx][ny] < sharkSize && board[nx][ny] >= 1) {
					check[nx][ny] = check[cur.first][cur.second] + 1;
					fish.push_back({nx, ny});
					q.push({nx, ny});
				} 
			} 
		}

		if(fish.size() == 0) {
			cout << second << '\n';
			return 0;
		} 
		else if(fish.size() == 1) {
			sharkX = fish[0].first;
			sharkY = fish[0].second;
			board[sharkX][sharkY] = 0;
			eatfish++;
			second += check[sharkX][sharkY];
		} 
		else {
			int mindist = 1e5;
			for (auto& x : fish) {
				mindist = min(mindist, check[x.first][x.second]);
			}
			vector<pair<int, int>> minfish;
			for (auto& x : fish) {
				if (mindist == check[x.first][x.second]) {
					minfish.push_back({ x.first,x.second });
				}
			}
			if (minfish.size() == 1) {
				sharkX = minfish[0].first;
				sharkY = minfish[0].second;
				board[sharkX][sharkY] = 0;
				second += check[sharkX][sharkY];
				eatfish++;
			}
			else {
				sort(minfish.begin(), minfish.end());
				sharkX = minfish[0].first;
				sharkY = minfish[0].second;
				second += check[sharkX][sharkY];
				board[sharkX][sharkY] = 0;
				eatfish++;
			}
		} 
	} 
}
