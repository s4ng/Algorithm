//분수찾기
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << '/' << 1 << '\n';
		return 0;
	}
	int sum = 1;
	long long cnt = 0;
	int num = 1;
	while (1) {
		sum++;
		cnt += num;
		if (cnt >= n) break;
		num++;
	}
	int top = 1, down = 1;
	if (sum % 2) top = sum - 1;
	else down = sum - 1;

	while (1) {
		if (cnt == n) break;

		if (sum % 2) {
			down++;
			top--;
		}
		else {
			top++;
			down--;
		}
		cnt--;
	}
	cout << top << '/' << down << '\n';
	return 0;
}
