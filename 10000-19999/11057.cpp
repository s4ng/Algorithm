//오르막 수
#include <bits/stdc++.h>
using namespace std;
int main(){
	// 입출력 가속화 -----
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, ans = 1; cin>>n;
	for (int i = 1; i <= 9; ++i)
		ans = ans * (n + i) % 10007;
	cout << ans * 6995 % 10007<<'\n';
	return 0;
}
