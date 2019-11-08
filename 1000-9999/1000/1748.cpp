// 수 이어 쓰기 1
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int size(int n) {
	int count = 0;
	do {
		n = int(n / 10);
		count++;
	} while (n > 0);
		
	return count;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, len = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		len += size(i);
	}
	cout << len << '\n';
}
