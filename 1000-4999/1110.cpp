//더하기 사이클
#include <iostream>
using namespace std;

int main() {
	int n, a, b, cnt = 0;
	cin >> n;
	a = n;
	while (true) {
		b = a/10 + a%10;
		if (a == n && cnt != 0) {
			break;
		}
		else {
			a = (a%10) * 10 + b%10;
			cnt++;
		}
	}
	cout << cnt << endl;
}