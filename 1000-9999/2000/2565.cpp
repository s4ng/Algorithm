// 전깃줄
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<pair<int, int>> v;
int lis[501];
int n, f, s, L, cnt;
int lower_bound(int start, int end, int key) {
	int mid;
	while (start < end) {
		mid = (start + end) / 2;
		if (lis[mid] < key)
			start = mid + 1;
		else
			end = mid;
	}
	return end + 1;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		v.push_back(make_pair(f, s));
	}
	sort(v.begin(), v.end());
	lis[0] = v[0].second;
	for (int i = 1; i < n; i++) {
		if (lis[L] < v[i].second) {
			lis[++L] = v[i].second;
		}
		else {
			int ans = lower_bound(0, L, v[i].second);
			lis[ans - 1] = v[i].second;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
