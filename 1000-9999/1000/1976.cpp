// 여행 가자
#include<bits/stdc++.h>
using namespace std;

int d[205];

int find(int a) {
	if(d[a] == a) 
		return a;
	return d[a] = find(d[a]);
} 

void uni(int a, int b) {
	a = find(a);
	b = find(b);
	if(a == b) return;
	d[a] = b;
	find(a);
} 

int main(){ 
	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) d[i] = i;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			int val;
			cin >> val;
			if(val) uni(i, j);
		} 
	} 

	int from, to;
	bool canTrip = true;
	cin >> from;
	for(int i = 1; i < m; i++) {
		if(!canTrip) continue;
		cin >> to;
		if(find(from) != find(to)) {
			canTrip = false;
		} 
		from = to;
	} 
	if(canTrip)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}
