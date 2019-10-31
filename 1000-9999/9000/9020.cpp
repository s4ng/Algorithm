// 골드바흐의 추측
#include <bits/stdc++.h>
using namespace std;

bool aris[10001] = { 0, 0, };
vector<int> prime;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	memset(aris, true, sizeof(aris));
	for (int i = 2; i <= 10000; i++) 
		if (aris[i] == true) 
			for (int j = i * 2; j <= 10000; j += i) 
				aris[j] = false;	
			
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		for (int i = n / 2; i >= 0; i--) {
			if (aris[i] == 1 && aris[n - i] == 1) {
				cout << i << ' ' << n-i << '\n';
				break;
			}
		}
	}
	return 0;
}
