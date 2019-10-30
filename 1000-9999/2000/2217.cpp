// 로프
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		ans = max(ans, v[i] * (n - i));
	}
	cout << ans << '\n';
}
