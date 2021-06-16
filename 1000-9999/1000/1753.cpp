// 최단경로
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

const int INF = 1e9+10;
vector<pii> adj[20005];
priority_queue<pii, vector<pii>, greater<pii>> pq;
int d[20005];

int main(){
	int n, m, s;
	cin >> n >> m >> s;
	
	for(int i = 0; i < m; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		adj[from].push_back({cost, to});
	} 

	for(int i = 1; i <= n; i++) {
		if(i == s) 
			d[i] = 0;
		else
			d[i] = INF;
	} 

	pq.push({d[s], s});

	while(!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		int dist = cur.first, idx = cur.second;
		if(d[idx] != dist) continue;
		for(auto next : adj[idx]) {
			int cost = next.first, nidx = next.second;
			if(d[nidx] > dist + cost) {
				d[nidx] = dist + cost;
				pq.push({d[nidx], nidx});
			} 
		} 
	} 

	for(int i = 1; i <= n; i++) {
		if(d[i] == INF) cout << "INF" << '\n';
		else cout << d[i] << '\n';
	} 
}
