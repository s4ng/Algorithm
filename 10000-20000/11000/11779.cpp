// 최소비용 구하기 2
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

const int INF = 1e9+10;
vector<pii> adj[1005];
priority_queue<pii, vector<pii>, greater<pii>> pq;
int d[1005];
int pre[1005];

int main(){
	int n, m, from, to;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		adj[from].push_back({cost, to});
	} 

	cin >> from >> to;

	for(int i = 1; i <= n; i++) {
		if(i == from) 
			d[i] = 0;
		else
			d[i] = INF;
	} 

	pq.push({d[from], from});

	while(!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		int dist = cur.first, idx = cur.second;
		if(d[idx] != dist) continue;
		for(auto next : adj[idx]) {
			int cost = next.first, nidx = next.second;
			if(d[nidx] > dist + cost) {
				d[nidx] = dist + cost;
				pre[nidx] = idx;
				pq.push({d[nidx], nidx});
			} 
		} 
	} 

	cout << d[to] << '\n';
	vector<int> path;
	int cur = to;
	while(cur != from) {
		path.push_back(cur);
		cur = pre[cur];
	} 
	path.push_back(cur);
	cout << path.size() << '\n';
	for(int i = path.size() - 1; i >= 0; i--) {
		cout << path[i] << ' ';
	} 
}
