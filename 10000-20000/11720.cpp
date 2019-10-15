//숫자의 합
#include <iostream>

using namespace std;

int main() {
	int n, res=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		res += a - '0';
	}
	cout << res << endl;
	cin >> n;
	return 0;
}