//01타일
#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	int a = 1, b = 2, c = 0;
	for (int i = 3; i <= n; i++) {
		c = (a + b) % 15746;
		a = b;
		b = c;
	}
	printf("%d", c);
}