//소트인사이드
#include <bits/stdc++.h>
using namespace std;

int arr[11];
bool desc(int a, int b) {
	return a > b;
}
int main()
{
	int n;
	cin >> n;
	string str = to_string(n);
	for (int i = 0; i < str.size(); i++) {
		arr[i] = str[i] - 48;
	}
	sort(arr, arr + str.size(), desc);
	for (int i = 0; i < str.size(); i++) {
		cout << arr[i];
	}
}