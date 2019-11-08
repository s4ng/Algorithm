// 앵그리 창영
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, w, h;
	cin >> n >> w >> h;
	float max;
	max = sqrt(w * w + h * h);
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp <= max)
			cout << "DA" << '\n';
		else
			cout << "NE" << '\n';
	}
}
