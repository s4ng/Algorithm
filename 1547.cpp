//공
#include <iostream>
using namespace std;

int main() {
	int M, X, Y, ball = 1;
	bool ok = true;
	cin >> M;
	if (M > 50 || M < 0) {
		ok = false;
	}
	
	for (int i = 0; i < M; i++) {
		cin >> X >> Y;
		if (X == ball) ball = Y;
		else if (Y == ball) ball = X;
	}
	if (ball > 3 || ball < 1) ok = false;

	if(ok) cout << ball;
	if (!ok) cout << -1;
}