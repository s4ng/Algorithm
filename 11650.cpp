//좌표 정렬하기
#include <bits/stdc++.h>
using namespace std;

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
	sort(pv.begin(), pv.end());
	for (int i = 0; i < pv.size(); i++) {
		cout << pv[i].first <<' '<< pv[i].second << '\n';
	}
}