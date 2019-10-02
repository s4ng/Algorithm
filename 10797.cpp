//10부제
#include <iostream>
using namespace std;

int main() {
	int day, tmp, count = 0;
	cin >> day;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		if (day == tmp)
			count++;
	}
	cout << count;
}