//A+B-7
#include <iostream>

using namespace std;

int main() {
	int n, count = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << "Case #" << count << ": " << a + b << endl;
		count++;
	}
}