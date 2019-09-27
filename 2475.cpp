//검증수
#include <bits/stdc++.h>

int sum = 0;
int main() {
	for (int i = 0; i < 5; i++) {
		int tmp;
		scanf("%d", &tmp);
		sum += tmp * tmp;
	}
	printf("%d\n", sum % 10);
}