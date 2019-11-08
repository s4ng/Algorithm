// 시험 점수
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int min = 0, man = 0, tmp;
	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		min += tmp;
	}
	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		man += tmp;
	}
	cout << max(min, man) << '\n';
}
