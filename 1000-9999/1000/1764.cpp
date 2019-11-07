// 듣보잡
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m, di = 0, bi = 0;
	cin >> n >> m;
	vector<string> db(n + m);
	vector<string> a;
	for (int i = 0; i < n + m; i++) {
		cin >> db[i];
	}
	sort(db.begin(), db.end());
	for (int i = 1; i < n + m; i++) {
		if (db[i - 1] == db[i]) {
			a.push_back(db[i]);
			i++;
		}
	}
	cout << a.size() << '\n';
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << '\n';
	}
}
