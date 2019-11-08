// 방학 숙제
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int l, a, b, c, d, g, m;
	cin >> l >> a >> b >> c >> d;
	if (a % c == 0) g = a / c;
	else g = a / c + 1;
	if (b % d == 0) m = b / d;
	else m = b / d + 1;
	cout << (g > m ? l - g : l - m) << '\n';
}
