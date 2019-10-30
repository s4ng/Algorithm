// 초콜릿 자르기
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	cout << (n - 1) + (m - 1) * n << '\n';
}
