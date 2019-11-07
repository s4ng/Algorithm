// 과제 안 내신 분..?
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int check[31];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int cnt = 1;
	for (int i = 0; i < 28; i++) {
		int tmp;
		cin >> tmp;
		check[tmp] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (check[i] == 0)
			cout << i << '\n';
	}
}
