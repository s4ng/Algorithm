// 알파벳 거리
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		string a, b;
		cin >> a >> b;
		int len = size(a);
		cout << "Distances: ";
		for (int i = 0; i < len; i++) {
			cout << abs((b[i] < a[i] ? 26 : 0)-(abs(a[i] - b[i]))) << ' ';
		}
		cout << '\n';
	}
}
