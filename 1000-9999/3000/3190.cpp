// 뱀
#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int board[101][101] = { 0 };
bool isThereSnake[101][101] = { 0 };

int main() {
	int n, k;
	cin >> n >> k;

	for(int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = 2;
	} 

	int l;
	cin >> l;
	char dir[10001];
	for(int i = 0; i < l; i++) {
		int a;
		char b;
		cin >> a >> b;
		dir[a] = b;
	} 

	int sec = 0;
	queue<pair<int, int>> snake;
	snake.push({1, 1});
	isThereSnake[1][1] = true;
	int direction = 1;

	while(true) {
		sec++;

		int nextX = snake.back().first + dy[direction];
		int nextY = snake.back().second + dx[direction];

		if(nextX < 1 || nextX > n || nextY < 1 || nextY > n)
			break;

		snake.push({nextX, nextY});

		if(dir[sec] == 'D') {
			direction = (direction + 1) % 4;
		} else if(dir[sec] == 'L') {
			direction = (direction + 3) % 4;
		} 

		if(board[nextX][nextY] == 2) 
			board[nextX][nextY] = 0;

		else {
			if(isThereSnake[nextX][nextY] == true)
				break;
			isThereSnake[snake.front().first][snake.front().second] = false;
			snake.pop();
		} 

		if(isThereSnake[nextX][nextY] == true)
			break;
		else
			isThereSnake[nextX][nextY] = true;
	} 

	cout << sec << '\n';
}
