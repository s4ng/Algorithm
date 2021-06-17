// 사이클 게임
#include<bits/stdc++.h>
using namespace std;

int uf[500005];

int find(int a) {
	if(uf[a] == a) return a;
	return uf[a] = find(uf[a]);
} 

bool uni(int a, int b) {
	a = find(a); b = find(b);
	if(a == b) return true;
	uf[a] = b;
	return false;
} 

int main(){ 
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++) 
		uf[i] = i;

	int u, v, answer = 0;
	for(int i = 1; i <= m; i++) {
		cin >> u >> v;
		if(uni(u, v)) {
			answer = i;
			break;
		} 
	} 

	if(answer == 0) cout << 0 << '\n';
	else cout << answer << '\n';
}
