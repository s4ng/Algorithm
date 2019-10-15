//영화감독 숌
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count = 0, num = 666;
	cin >> n;
	while (true) {
		string str = to_string(num);
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6') {
				count++;
				break;
			}
		}
		if (n == count) {
			cout << num << endl;
			break;
		}
		num++;
	}
	return 0;
}