// 점수 계산
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int arr[8];
int brr[8];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
		brr[i] = tmp;
	}
	sort(brr, brr + 8);
	for (int i = 7; i >= 3; i--)
		sum += brr[i];
	cout << sum << '\n';
	for (int i = 0; i < 8; i++) {
		for (int j = 3; j < 8; j++) {
			if (arr[i] == brr[j])
				cout << i+1 << ' ';
		}
	}
}
