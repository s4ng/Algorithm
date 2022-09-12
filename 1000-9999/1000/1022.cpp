// 소용돌이 예쁘게 출력하기 

#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int board[50][5] = { 0 };
int r1, c1, r2, c2;
int y = 0, x = 0;
int dir = 3;
int cnt = 0, num = 1, dcnt = 1;

int main() {

	cin >> r1 >> c1 >> r2 >> c2;
	while (!board[r2 - r1][0] || !board[0][0] || !board[0][c2 - c1] 
			|| !board[r2 - r1][c2 - c1]) {

		if (y - r1 >= 0 && y - r1 <= (r2 - r1) && x - c1 >= 0 && x - c1 <= (c2 - c1)) {
			board[y - r1][x - c1] = num;
		}

		cnt += 1;
		num += 1;

		y = y + dy[dir];
		x = x + dx[dir];

		if (cnt == dcnt) {
			cnt = 0;
			dir = (dir + 1) % 4;
			if (dir == 1 || dir == 3)
				dcnt += 1;
		}
	}

	int blankCount = 0;

	while(num) {
		num /= 10;
		blankCount += 1;
	} 

	for (int i = 0; i <= (r2 - r1); ++i) {
		for (int j = 0; j <= (c2 - c1); ++j) {
			printf("%*d ", blankCount, board[i][j]);
		}
		cout << "\n";
	}
} 


/* 1트
#include<bits/stdc++.h>
using namespace std;

const int BOARD_MAX = 5600;
int board[BOARD_MAX][BOARD_MAX] = { 0 };
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int dr = 0;
int r1, c1, r2, c2;
int startX, startY, endX, endY;
int centerNum;
int spiralCount;
int boardCount = 1;

int max(int r1, int r2, int c1, int c2) {
	int r1t = r1 < 0 ? r1 *= -1 : r1;
	int r2t = r2 < 0 ? r2 *= -1 : r2;
	int c1t = c1 < 0 ? c1 *= -1 : c1;
	int c2t = c2 < 0 ? c2 *= -1 : c2;
	return max(max(max(r1t , c1t), r2t), c2t);
} 

void changeDirection() {
	dr++;
	if(dr >= 4) {
		dr = 0;
	} 
} 

void fillBoard() {
	board[centerNum][centerNum] = boardCount++;
	int x = centerNum;
	int y = centerNum;
	for(int j = 1; j <= spiralCount; j++) {
		for(int i = 0; i < j; i++) {
			x += dx[dr];
			y += dy[dr];
			if(!(startX <= y && endX >= y) || !(startY <= x && endY >= x)) {
				boardCount++;
				continue;
			} 
			board[y][x] = boardCount++;
		} 
		changeDirection();

		if(j == spiralCount)
			break;

		for(int i = 0; i < j; i++) {
			x += dx[dr];
			y += dy[dr];
			if(!(startX <= y && endX >= y) || !(startY <= x && endY >= x)) {
				boardCount++;
				continue;
			} 
			board[y][x] = boardCount++;
		} 
		changeDirection();
	} 
} 

int length(int n) {
	int cnt = 0;
	while(n != 0) {
		n /= 10;
		cnt++;
	} 
	return cnt;
} 

int getMaxLength() {
	int maxLength = -1;
	for(int i = startX; i <= endX; i++) {
		for(int j = startY; j <= endY; j++) {
			int nowLength = length(board[i][j]);
			maxLength = maxLength < nowLength ? nowLength : maxLength;
		} 
	} 
	return maxLength;
} 

int main() {

	cin >> r1 >> c1 >> r2 >> c2;
	centerNum = max(r1, c1, r2, c2);
	if(min(min(min(r1, c1), r2), c2) > 50) {
		centerNum = 0;
	} 
	spiralCount = centerNum * 2 + 1;
	startX = centerNum + r1;
	startY = centerNum + c1;
	endX = centerNum + r2;
 	endY = centerNum + c2;

	fillBoard();

	int maxLength = getMaxLength();
	
	for(int i = startX; i <= endX; i++) {
		for(int j = startY; j <= endY; j++) {
			int nowNum = board[i][j];
			int nowLength = length(nowNum);
			if(nowLength < maxLength) {
				for(int k = 0; k < maxLength - nowLength; k++) {
					cout << ' ';
				} 
			} 
			cout << board[i][j] << ' ';
		} 
		cout << '\n';
	} 
}
*/
