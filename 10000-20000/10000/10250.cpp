// ACM 호텔
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int h, w, n;
		cin >> h >> w >> n;
		cout << (n % h == 0 ? h * 100 + n / h : n % h * 100 + n / h + 1) << '\n';
	}
}
