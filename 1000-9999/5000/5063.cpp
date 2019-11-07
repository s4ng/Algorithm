// TGN
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int check[31];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int r, e, c;
		cin >> r >> e >> c;
		if (e - c > r)
			cout << "advertise" << '\n';
		else if (e - c == r)
			cout << "does not matter" << '\n';
		else
			cout << "do not advertise" << '\n';
	}
}
