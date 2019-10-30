// 터렛
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int x1, y1, r1, x2, y2, r2, result;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt((double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
		int sum = r1 + r2;
		int min = abs(r1 - r2);
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) result = -1;
			else result = 0;
		}
		else {
			if (min < d && d < sum) result = 2;
			else if (d == min || d == sum) result = 1;
			else if (d == 0 || d>sum || d < min) result = 0;
		}
		cout << result << '\n';
	}
}
