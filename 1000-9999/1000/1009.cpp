// 분산처리
#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long a, b, res;
		cin >> a >> b;
		res = 1;
		for(int i = 1; i <= b; ++i){
			res = (res * a) % 10;
		} 
		if(res == 0) cout << 10 << '\n';
		else cout << res << '\n';
	} 
}
