// 직각삼각형
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	while (1) {
		int a, b, c;
		cin >>a >> b >> c;
		if (!a && !b && !c)
			break;
		if (b * b + c * c == a * a || a * a + c * c == b * b || b * b + a * a == c * c)
			cout << "right" << '\n';
		else 
			cout << "wrong" << '\n';
	}
}
