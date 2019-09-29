//덩치
#include <bits/stdc++.h>
using namespace std;

int arr[51][2];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (j == i) continue;
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				count++;
			}
		}
		cout << count+1 << ' ';
	}
}