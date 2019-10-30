// 분산처리
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int a, b, temp;
		cin >> a >> b;
		temp = a;
		for (int i = 0; i < b - 1; i++) a = temp * a % 10;
		if (a == 0) a = 10;
		cout << a << '\n';
	}
}
