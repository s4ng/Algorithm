//분해합
#include <iostream>
#include <string>
using namespace std;

int main() {
	bool isNothing = true;
	int i, n, tmp;
	cin >> n;
	for (i = 0; i < n; i++) {
		tmp = i;
		string str = to_string(i);
		for (int j = 0; j < str.size(); j++) {
			tmp += (str[j]-48);
		}
		if (tmp == n) {
			isNothing = false;
			break;
		}
	}
	if (isNothing) cout << 0 << endl;
	else cout << i << endl;
}