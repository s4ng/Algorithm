//소수 찾기
#include <iostream>

using namespace std;

int prime(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		if (prime(m) == 1) cnt++;
	}
	cout << cnt << endl;
}