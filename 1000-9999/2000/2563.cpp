// 색종이
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int arr[101][101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, area = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a; j < a + 10; j++) {
			for(int k = b; k < b + 10; k++){
				arr[j][k]++;
			}
		}
	}
	for (int i = 1; i < 101; i++) {
		for (int j = 1; j < 101; j++) {
			if (arr[i][j] > 0)
				area++;
		}
	}
	cout << area << '\n';
}
