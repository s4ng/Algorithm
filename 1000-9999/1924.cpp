//2007년
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> day = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int x, y, m=1, d=1, i=0;
	cin >> x >> y;
	while (true) {
		if (x == m && y == d) {
			cout << day[i] << endl;
			break;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (d == 31) {
				m++;
				d = 1;
			}
			else {
				d++;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d == 30) {
				m++;
				d = 1;
			}
			else {
				d++;
			}
		}
		else {
			if (d == 28) {
				m++;
				d = 1;
			}
			else {
				d++;
			}
		}
		if (i != 6) {
			i++;
		}
		else {
			i = 0;
		}
	}
}