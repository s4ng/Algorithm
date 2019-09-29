//나머지
#include <iostream>
using namespace std;

bool arr[42];

int main() {
	int count = 0, i = 10;
	while(i--) {
		int n;
		cin >> n;
		arr[n % 42] = true;
	}
	for (int j = 0; j < 42; j++) {
		if (arr[j] == true) count++;
	}
	cout << count;
}