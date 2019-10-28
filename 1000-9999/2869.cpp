// 달팽이는 올라가고 싶다.
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, v, day = 1;
	cin >> a >> b >> v;
	day = (v - b - 1) / (a - b) + 1;
	cout << day << '\n';
	return 0;
}
