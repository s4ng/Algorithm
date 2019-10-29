// 베르트랑 공준
#include <bits/stdc++.h>
using namespace std;

bool c[250001] = { false, };
int p[250000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int count = 0;
	for (int i = 2; i <= 250000; i++) {
		if (c[i] == false) {
			p[count++] = i;
			for (int j = i + i; j <= 250000; j += i)
				c[j] = true;
		}
	}
	while (1) {
		int n, cnt = 0;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i <= 250000; i++) {
			if (p[i] > 2 * n)
				break;
			if (p[i] > n&& p[i] <= 2 * n)
				cnt++;
		}
		cout << cnt << '\n';
	}
}
