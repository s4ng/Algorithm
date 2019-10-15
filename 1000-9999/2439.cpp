//별 찍기 - 2
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j >= n - i - 1) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}
	cin >> n;
	return 0;
}