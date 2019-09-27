//오븐 시계
#include <bits/stdc++.h>

int main() {
	int h, m, c, time = 0, minute = 0;
	scanf("%d%d%d", &h, &m, &c);
	if (c >= 60) {
		time = c / 60;
		minute = c % 60;
	}
	else {
		minute = c;
	}

	time += h;
	minute += m;
	if (minute >= 60) {
		time += minute / 60;
		minute = minute % 60;
		if (time >= 24) {
			time = time % 24;
		}
	}
	else {
		if (time >= 24) {
			time = time % 24;
		}
	}

	printf("%d %d", time, minute);
}