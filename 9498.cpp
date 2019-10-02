//시험 성적
#include <iostream>

using namespace std;

int main() {
	int n;
	char res;
	cin >> n;
	if (n >= 90 && 100 >= n) res = 'A';
	else if (n >= 80 && 90 > n) res = 'B';
	else if (n >= 70 && 80 > n) res = 'C';
	else if (n >= 60 && 70 > n) res = 'D';
	else res = 'F';
	cout << res;
	return 0;
}