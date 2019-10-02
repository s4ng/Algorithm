//파도반 수열
#include <bits/stdc++.h>

long long arr[101] = { 1, 1, 1, 2, 2, };
int main() {
	for (int i = 4; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int m;
		scanf("%d", &m);
		printf("%lld\n", arr[m - 1]);
	}
}