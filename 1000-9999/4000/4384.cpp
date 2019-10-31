// 공평하게 
#include <bits/stdc++.h>
using namespace std;

int people[1000];
int i, j, k, n, tot, best;
char canDo[101][50000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> people[i];
		tot += people[i];
	}

	canDo[0][0] = 1;
	for (i = 0; i < n; i++) {
		for (j = n / 2; j >= 0; j--) {
			for (k = 45000; k >= 0; k--) {
				if (canDo[j][k])
					canDo[j + 1][k + people[i]] = 1;
			}
		}
	}
	for (i = 0; i <= 45000; i++) {
		if (!canDo[n / 2][i])
			continue;
		if (abs(tot - 2 * i) < abs(tot - 2 * best))
			best = i;
	}
	if (best > tot - best)
		best = tot - best;
	cout << best << ' ' << tot - best << '\n';
}
