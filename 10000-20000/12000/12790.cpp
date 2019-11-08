// Mini Fantasy War
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int a, b, c, d, e, f, g, h, hp, mp, atk, power;
		cin >> a >> b >> c >> d >> e >> f >> g >> h;
		hp = (a + e < 1 ? 1 : a + e);
		mp = 5 * (b + f < 1 ? 1 : b + f);
		atk = 2*(c + g < 0 ? 0 : c + g);
		power = hp + mp + atk + 2 * (d + h);
		cout << power << '\n';
	}
}
