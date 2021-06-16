// 집합의 표현
#include<bits/stdc++.h>
using namespace std;

vector<int> d;

int find(int a) {
	if(d[a] == a) 
		return a;
	else
		return d[a] = find(d[a]);
} 

void _union(int a, int b) {
	int pa = find(a);
	int pb = find(b);
	d[pb] = pa;
} 

int main(){ 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	for(int i = 0; i <= n; i++) {
		d.push_back(i);
	} 

	while(m--) {
		int cmd, a, b;
		cin >> cmd >> a >> b;
		if(cmd == 0) {
			_union(a, b);
		} else {
			if(find(a) == find(b)) 
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		} 
	} 
}
