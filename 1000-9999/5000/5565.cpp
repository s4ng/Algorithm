// 영수증
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < 9; i++) {
		int t;
		cin >> t;
		n -= t;
	}
	cout << n << '\n';
}
