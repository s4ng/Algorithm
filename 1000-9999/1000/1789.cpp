// 수들의 합
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n, sum = 0, num = 0;
	cin >> n;
	for (int i = 1; ; i++) {
		sum += i;
		if (sum > n)
			break;
		else
			num++;
	}
	cout << num << '\n';
}
