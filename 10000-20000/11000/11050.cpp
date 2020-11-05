// 이항 계수 1
#include<bits/stdc++.h>
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;

int sol(int n, int k){
	if(k == 0 || n == k)
		return 1;
	return sol(n-1, k) + sol(n-1, k-1);
} 

int main(){
	init;
	int n, k;
	cin >> n >> k;
	cout << sol(n, k) << '\n';
} 
