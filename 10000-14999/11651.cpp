//좌표 정렬하기 2
#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second < b.second)	return true;
	else if (a.second == b.second)
		if (a.first < b.first)
			return true;
	return false;
}
vector<pair<int, int>> pv;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pv.push_back(make_pair(a, b));
	}
	sort(pv.begin(), pv.end(), cmp);
	for (int i = 0; i < pv.size(); i++) {
		cout << pv[i].first <<' '<< pv[i].second << '\n';
	}
}