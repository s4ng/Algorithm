// 결혼식
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

bool f[501][501];
bool lis[501];
bool vis[501];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m, count = 0;;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		f[a][b] = true;
		f[b][a] = true;
	}

	for (int i = 1; i <= n; i++) {
		if (f[1][i]) {
			vis[i] = true;
			lis[i] = true;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (lis[i]) {
			for (int j = 1; j <= n; j++) {
				if (f[i][j])
					vis[j] = true;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (vis[i])
			count++;
	}
	cout << count << '\n';
}
