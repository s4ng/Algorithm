//그룹 단어 체커
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool isCorrect = false;
		string s, tmp = "";
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < tmp.size(); j++) {
				if (tmp[j] == s[i]) isCorrect = true;
			}
			if (s[i] != s[i + 1]) {
				tmp.push_back(s[i]);
			}
		}
		if (!isCorrect) count++;
	}
	cout << count << '\n';
}