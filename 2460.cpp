//지능형 기차 - 2
#include <iostream>
using namespace std;

int main() {
	int in, out, people = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		people -= out;
		people += in;
		if (max < people) {
			max = people;
		}
	}
	cout << max;
}