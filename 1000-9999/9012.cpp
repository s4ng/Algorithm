//괄호
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char> s;
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (j == 0 && str[j] == ')') {
				s.push(')');
				break;
			}

			if (str[j] == '(') {
				s.push('(');
			}
			else {
				if (s.empty()) {
					s.push(')');
					break;
				}
				else {
					if (s.top() == '(') {
						s.pop();
					}
				}
			}
		}
		printf("%s\n", s.empty() ? "YES" : "NO");
	}
}