//이친수
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long a, b, c;
	scanf("%d", &n);
	a = 1;
	b = 1;
	if (n == 1) {
		printf("%d\n", a);
		return 0;
	}
	if (n == 2) {
		printf("%d\n", b);
		return 0;
	}
	for (int i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lld\n", c);
}
