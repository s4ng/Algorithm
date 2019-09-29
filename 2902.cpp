//KMP는 왜 KMP일까?
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str, answer = "";
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (i == 0) answer.push_back(str[i]);
		else if (str[i - 1] == '-') {
			answer.push_back(str[i]);
		}
	}
	cout << answer;
}