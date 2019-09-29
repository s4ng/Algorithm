//최댓값
#include <iostream>
using namespace std;

int main() {
	int max = 0, index;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		arr[i] = n;
		if (n > max) {
			max = n;
		}
	}
	for (int i = 0; arr[i]; i++) {
		if (arr[i] == max) index = i+1;
	}
	cout << max << endl << index << endl;
}