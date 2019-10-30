//최대공약수와 최대공배수
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << '\n';
	cout << a * b / gcd(a, b) << '\n';
	return 0;
}
