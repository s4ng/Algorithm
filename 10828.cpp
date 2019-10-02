//스택
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	stack<int> arr;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			arr.push(a);
		}
		else if (str == "pop") {
			if (arr.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << arr.top() << endl;
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
		else { // "top"
			if (!arr.empty()) {
				cout << arr.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}
}