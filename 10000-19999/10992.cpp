//별 찍기 - 17
#include <bits/stdc++.h>
using namespace std;

int main() {
	// --- 입출력 가속화 ---
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + i; j++) {
			if (j >= n - i - 1) {
				if (i < n - 1) {
					if (j == n - i - 1 || j == n + i - 1) cout << '*';
					else cout << ' ';
				}
				else cout << '*';
			}
			else cout << ' ';
		}
		cout << '\n';
	}
}
