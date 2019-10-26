// 상근날드
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int burger[3];
int drink[2];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> burger[0] >> burger[1] >> burger[2];
	cin >> drink[0] >> drink[1];
	sort(burger, burger+3);
	sort(drink, drink + 2);
	cout << burger[0] + drink[0] - 50 << '\n';
}
