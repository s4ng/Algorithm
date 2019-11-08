// 내 학점을 구해줘
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int n, aSum = 0;
		float bSum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			float b;
			cin >> a >> b;
			aSum += a;
			bSum += (a*b);
		}
		cout << fixed;
		cout.precision(1);
		cout << aSum << ' ' << round(10*bSum/aSum)/10 << setprecision(2) << '\n';
	}
}
