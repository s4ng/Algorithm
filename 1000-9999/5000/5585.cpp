// 거스름돈
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int yen[] = { 500, 100, 50, 10, 5, 1 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int price, change = 0;
	cin >> price;
	price = 1000 - price;
	while (price) {
		for (int i = 0; i < 6; i++) {
			if (yen[i] <= price) {
				price -= yen[i];
				change++;
				break;
			}
		}
	}
	cout << change << '\n';
}
