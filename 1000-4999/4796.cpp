//캠핑
#include <bits/stdc++.h>
using namespace std;

int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int count = 1;
	while (1) {
		int l, p, v;
		cin >> l >> p >> v;
		if (l == 0) break;

		if (v % p <= l)
			cout << "Case " << count++ << ": " << (v / p) * l + v % p << '\n';
		else
			cout << "Case " << count++ << ": " << (v / p) * l + l << '\n';
	}
}
