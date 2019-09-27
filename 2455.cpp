//지능형 기차
#include <bits/stdc++.h>

int people = 0, max = 0;
int main() {
	for (int i = 0; i < 4; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		people -= a;
		people += b;
		if (people > max) max = people;
	}
	printf("%d\n", max);
}