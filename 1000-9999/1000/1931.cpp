// 회의실배정
#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, first = 0, count = 0;
	cin >> n;
	vector<pair<int, int>> vp;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vp.push_back(make_pair(a, b));
	}
	sort(vp.begin(), vp.end(), comp);
	for (int i = 0; i < n; i++) {
		if (vp[i].first >= first) {
			count++;
			first = vp[i].second;
		}
	}
	cout << count << '\n';
}
