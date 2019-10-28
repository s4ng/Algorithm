// Fly me to the Alpha Centauri
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while (q--) {
		int x, y;
		cin >> x >> y;
		long long i = 1;
		while (i*i <= (y - x)) i++;
		i--;
		long long rmn = (y - x) - i*i;
		rmn = (long long)ceil((double)rmn / (double)i);
		cout << i * 2 - 1 + rmn << '\n';
	}
	return 0;
}
