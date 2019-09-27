//평균
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> arr;
	double sum = 0.0;
	int n, max=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int point;
		cin >> point;
		arr.push_back(point);
		if (point > max) max = point;
	}
	for (int j = 0; j < arr.size(); j++) {
		double tmp;
		tmp = (arr[j] / max) * 100;
		arr[j] = tmp;
	}
	for (int k = 0; k < arr.size(); k++) {
		sum += arr[k];
	}
	cout << sum/n << endl;
	
}