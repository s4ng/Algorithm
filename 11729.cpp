//하노이 탑 이동 순서
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ans;
int cnt;

void hanoi(int n, int f, int t) {
	if (n == 0) return;
	hanoi(n - 1, f, 6 - f - t);
	cnt++;
	ans.emplace_back(f, t);
	hanoi(n - 1, 6 - f - t, t);
}
int main() {
	int N;
	cin >> N;
	hanoi(N, 1, 3);
	cout << cnt << '\n';
	for (auto[f, t] : ans) cout << f << ' ' << t << '\n';
	return 0;
}