// 벌집
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, layer = 1, max = 1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == max+1) {
			max += layer * 6;
			layer++;
		}
	}
	cout << layer << '\n';
}
