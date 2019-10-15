//블랙잭
#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main() {
	int n, a, max = 0;
	cin >> n >> a;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for(int j = 1; j < n; j++){
			if (i == j) {
				continue;
			}
			for (int k = 2; k < n; k++) {
				if (i == k || j == k) continue;
				int tmp = arr[i] + arr[j] + arr[k];
				if (tmp >= max && tmp <= a) {
					max = tmp;
				}
			}
		}
	}
	cout << max << '\n';
}