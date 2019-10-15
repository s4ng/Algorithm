//큐
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int n;
	queue<int> arr;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int tmp;
			cin >> tmp;
			arr.push(tmp);
		}
		else if (str == "pop") {
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.front() << endl;
				arr.pop();
			}
		}
		else if (str == "size") {
			cout << arr.size() << endl;
		}
		else if (str == "empty") {
			if (arr.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (str == "front") { 
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.front() << endl;
			}
		}
		else {// "back"
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.back() << endl;
			}
		}
	}
}