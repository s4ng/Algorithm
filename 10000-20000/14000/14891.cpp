// 톱니바퀴
#include<bits/stdc++.h>
using namespace std;

int gears[4][8];

void rotate(int gear, int direction) {
	if(direction == -1) {
		int tmp = gears[gear][0];
		for(int i = 0; i < 7; i++) {
			gears[gear][i] = gears[gear][i + 1];
		} 
		gears[gear][7] = tmp;
	} else if(direction == 1) {
		int tmp = gears[gear][7];
		for(int i = 7; i > 0; i--) {
			gears[gear][i] = gears[gear][i - 1];
		} 
		gears[gear][0] = tmp;
	} 
} 

int main() {
	for(int i = 0; i < 4; i++) {
		string s;
		cin >> s;
		for(int j = 0; j < s.length(); j++) {
			if(s[j] == '1') {
				gears[i][j] = 1;
			} else {
				gears[i][j] = 0;
			}
		} 
	} 

	int k;
	cin >> k;
	while(k--) {
		int n, d;
		cin >> n >> d;

		rotate(n - 1, d);

		int d2 = d, d1 = d;
		bool isPreviousRotate = true;

		for(int j = n - 2; j >= 0; j--) {
			d1 *= -1;
			if(isPreviousRotate && gears[j][2] != gears[j+1][6 + (d1 * -1)]) {
				rotate(j, d1);
			} else 
				isPreviousRotate = false;
		} 
		
		isPreviousRotate = true;
		for(int j = n; j < 4; j++) {
			d2 *= -1;
			if(isPreviousRotate && gears[j][6] != gears[j-1][2 + (d2 * -1)]) {
				rotate(j, d2);
			} else
				isPreviousRotate = false;
		} 

	} 
	int result = 0;
	int point = 1;
	for(int i = 0; i < 4; i++) {
		if(i > 0)
			point *= 2;
		if(gears[i][0] == 1) {
			result += point;
		} 
	} 

	cout << result << '\n';
}
