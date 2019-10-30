// 플러그
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (i == 0)
			sum = tmp;
		else
			sum += tmp - 1;
	}
	cout << sum << '\n';
}
