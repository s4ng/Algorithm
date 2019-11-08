// 소음
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string a, b;
	char y;
	cin >> a >> y >> b;
	if (y == '*') {
		for (int i = 0; i < b.size() - 1; i++) {
			a.push_back('0');
		}
	}
	else {
		if (a == b) {
			a[0] = '2';
		}
		else {
			if (b.size() > a.size())
				swap(a, b);
			a[a.size() - b.size()] = '1';
		}
	}
	cout << a << '\n';
}
