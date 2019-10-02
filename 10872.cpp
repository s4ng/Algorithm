//팩토리얼
#include <iostream>
using namespace std;

int main() {
	int arr[15];
	int n;
	cin >> n;
	arr[0] = 1;
	for (int i = 1; i <= n; i++) {
		arr[i] = arr[i-1] * i;
	}
	cout << arr[n] << '\n';
}