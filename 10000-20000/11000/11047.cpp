// 동전 0
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k, cnt = 0;
	cin >> n >> k;
	vector<int> s;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		s.push_back(t);
	}
	while (k != 0) {
		for (auto i = s.rbegin(); i != s.rend(); i++) {
			if (*i<= k) {
				k -= *i;
				cnt++;
				break;
			}
		}
	}
	cout << cnt << '\n';
}
