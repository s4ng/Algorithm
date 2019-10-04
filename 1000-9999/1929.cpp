//소수 구하기
#include <bits/stdc++.h>
using namespace std;

int a[1000001] = {0, 1, };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> m >> n;
	for (int i = 2; i <= n; i++)
		for (int j = 2; i * j <= n; j++)
			a[i * j] = 1;

	for (int i = m; i <= n; i++)
		if (!a[i]) cout << i << '\n';
}
