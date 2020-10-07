// 사분면 고르기
#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, ans;
	cin >> x >> y;
	if(x > 0){
		ans = y > 0 ? 1 : 4;
	} 
	else{
		ans = y > 0 ? 2 : 3;
	} 
	cout << ans << '\n';
}
