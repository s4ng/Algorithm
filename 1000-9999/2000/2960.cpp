// 에라토스테네스의 체
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool a[1001];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	memset(a, true, sizeof(a));
	int n, k, count = 0;
	cin >> n >> k;
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (!a[j]) continue;
			a[j] = false;
			++count;
			if (count == k) {
				cout << j << '\n';
				return 0;
			}
		}
	}
}
