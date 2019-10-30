// 별 찍기 - 10
#include <bits/stdc++.h>
using namespace std;

char mat[2201][2201];

void rec(int y, int x, int num) {
	if (num == 1) {
		mat[y][x] = '*';
		return;
	}

	int div = num / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1);
			else rec(y + (i * div), x + (j * div), div);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;

	memset(mat, ' ', sizeof(mat));

	rec(0, 0, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << mat[i][j];
		cout << '\n';
	}
}
