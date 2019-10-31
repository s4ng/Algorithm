// 네 번째 점
#include <bits/stdc++.h>
using namespace std;

int notSame(int a, int b, int c) {
	if (a == b)
		return c;
	else if (b == c)
		return a;
	else 
		return b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << notSame(x1, x2, x3) << ' ' << notSame(y1, y2, y3) << '\n';
}
