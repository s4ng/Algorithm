//그릇
#include <iostream>
using namespace std;

int main() {
	int length = 0, last = 0;
	char str[50];
	cin >> str;
	for (int i = 0; i < 50; i++) {
		if (i == 0) {
			if (str[i] == '(')
				last = 1;
			else if (str[i] == ')')
				last = 2;

			length += 10;
		}
		else if (last == 1) {
			if (str[i] == '(') {
				length += 5;
				last = 1;
			}
			else if (str[i] == ')') {
				length += 10;
				last = 2;
			}
		}
		else if (last == 2) {
			if (str[i] == '(') {
				length += 10;
				last = 1;
			}
			else if (str[i] == ')') {
				length += 5;
				last = 2;
			}
		}
	}
	cout << length;
}