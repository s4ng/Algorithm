//곱셈
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	string str = to_string(b);
	for (int i = 2; i >= 0; i--) {
		cout << a * (str[i] - 48) << endl;
	}
	cout << a * b << endl;
}