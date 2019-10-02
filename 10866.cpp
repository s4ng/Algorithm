//덱
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int n;
	deque<int> arr;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			int tmp;
			cin >> tmp;
			arr.push_front(tmp);
		}
		else if (str == "push_back") {
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		else if (str == "pop_front") {
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.front() << endl;
				arr.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.back() << endl;
				arr.pop_back();
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