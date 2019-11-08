// 농구 경기
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int cha[26];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string ans;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		cha[tmp[0] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (cha[i] >= 5) {
			ans.push_back(i + 97);
		}
	}
	cout << (ans.size() > 0 ? ans : "PREDAJA") << '\n';
}
