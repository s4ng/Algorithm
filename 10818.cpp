//최소, 최대
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		arr.push_back(m);
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] << " " << arr[arr.size() - 1] << endl;
}