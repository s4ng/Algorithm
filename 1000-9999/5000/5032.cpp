// 탄산 음료
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int e, f, c, cnt, empty;
	cin >> e >> f >> c;
	cnt = (e + f) / c;
	empty = cnt + (e + f) % c;
	while (empty / c) {
		cnt += (empty / c); 
		empty = ((empty / c) + (empty % c)); 
	}
	cout << cnt << '\n';
}
