//평균은 넘겠지
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> answer;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<double> arr;
		int count = 0, m;
		double avr, sum = 0.0;
		cin >> m;
		for (int j = 0; j < m; j++) {
			int p;
			cin >> p;
			arr.push_back(p);
		}
		for (int k = 0; k < m; k++) {
			sum += arr[k];
		}
		avr = sum / m;
		for (int o = 0; o < m; o++) {
			if (arr[o] > avr) count++;
		}
		answer.push_back((double)count / (double)m * 100.0);
	}

	for (int i = 0; i < answer.size(); i++) {
		cout << fixed;
		cout.precision(3);
		cout << answer[i] << '%' << endl;
	}
}