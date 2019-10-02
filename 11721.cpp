//열 개씩 끊어 출력하기
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int idx = -1;
	while(str[++idx]) {
		cout << str[idx];
		if (idx % 10 == 9) cout << endl;
	}
	cin >> idx;
	return 0;
}