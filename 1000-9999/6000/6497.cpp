// 전력난
#include<bits/stdc++.h>
using namespace std;

int parent[200001];
tuple<int, int, int> edge[200001];

int find(int a) {
	if(parent[a] == a) {
		return a;
	}
	return parent[a] = find(parent[a]);
} 

void _union(int a, int b) {
	a = find(a);
	b = find(b);

	if(a>b) parent[a] = b;
	else parent[b] = a;
} 

bool isSameParent(int a, int b) {
	a = find(a);
	b = find(b);
	if(a == b) {
		return true;
	} 
	return false;
} 

int main(){
	while(true) {
		int m, n, maxCost = 0;
		cin >> m >> n;

		if(m == 0 && n == 0) 
			break;

		for(int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			edge[i] = make_tuple(c, a, b);
			maxCost += c;
		} 

		sort(edge, edge + n);

		for(int i = 1; i <= m; i++) {
			parent[i] = i;
		} 

		int answer = 0;
		for(int i = 0; i < n; i++) {
			int a, b, c;
			tie(c, a, b) = edge[i];
			if(!isSameParent(a, b)) {
				_union(a, b);
				answer += c;
			} 
		} 

		cout << maxCost - answer << endl;
	} 
}
