//나이순 정렬
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
vector<pair<int, string>> v;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		string b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}