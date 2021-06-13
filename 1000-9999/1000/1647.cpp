// 도시 분할 계획
#include<bits/stdc++.h>
using namespace std;

int parent[100001];
tuple<int, int, int> edge[1000001];

int find(int a) {
	if(parent[a] == a) {
		return a;
	}
	return parent[a] = find(parent[a]);
} 

void _union(int a, int b) {
	a = find(a);
	b = find(b);
	if(a != b) {
		parent[b] = a;
	} 
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
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		edge[i] = make_tuple(c, a, b);
	} 

	sort(edge, edge + m);

	for(int i = 1; i <= n; i++) {
		parent[i] = i;
	} 

	int answer = 0;
	int lastCost = 0;
	for(int i = 0; i < m; i++) {
		int a, b, c;
		tie(c, a, b) = edge[i];
		if(!isSameParent(a, b)) {
			_union(a, b);
			answer += c;
			lastCost = c;
		} 
	} 

	answer -= lastCost;
	cout << answer << '\n';
}
