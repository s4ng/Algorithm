//수 정렬하기 3
#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		arr[tmp]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}