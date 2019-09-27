//단어 공부
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[91];
	for (int i = 0; i < 91; i++) {
		arr[i] = 0;
	}
	string s;
	cin >> s;
	char answer;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] > 95) s[i] -= 32;
		arr[s[i]]++;
	}
	int max = 0, cnt = 0, index;
	for (int i = 0; i < 91; i++) {
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < 91; i++) {
		if (arr[i] == max) {
			index = i;
			cnt++;
		}
	}
	answer = index;
	if (cnt == 1) cout << answer << '\n';
	else cout << '?' << '\n';
}