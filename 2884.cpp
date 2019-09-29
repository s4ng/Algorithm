//알람시계
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > 0) {
		if (b >= 45) {
			cout << a <<" "<< b - 45 << endl;
		}
		else {
			cout << a - 1 << " " << 60 - (45 - b) << endl;
		}
	}
	else if (a == 0) {
		if (b >= 45) {
			cout << 0 << " " << b - 45 << endl;
		}
		else {
			cout << 23 << " " << 60 - (45 - b) << endl;
		}
	}
}