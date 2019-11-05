// 0 = not cute / 1 = cute
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		sum += t;
	}
	cout << (sum > n/2?"Junhee is cute!" : "Junhee is not cute!") << '\n';
}
