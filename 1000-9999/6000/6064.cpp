// 카잉 달력
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int m, n, x, y, i, limit, tmp;
		cin >> m >> n >> x >> y;
		limit = lcm(m, n);
		for (i = x; i <= limit; i += m) {
			tmp = (i % n == 0) ? n : i % n;
			if (tmp == y) {
				cout << i << '\n';
				break;
			}
		}
		if (i > limit) 
			cout << -1 << '\n';
	}
}
