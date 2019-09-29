//문자열 반복
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		string t;
		cin >> m >> t;
		for (int j = 0; j < t.size(); j++) {
			for (int k = 0; k < m; k++) {
				cout << t[j];
			}
		}
		cout << endl;
	}
}