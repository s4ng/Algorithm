// 파티
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int INF = 1e9 + 10;

vector<pii> adj[1005];
priority_queue<pii, vector<pii>, greater<pii>> pq;
int d[1005][1005];

void dijk(int start) {
	while(!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		int dist = cur.first, idx = cur.second;
		if(d[start][idx] != dist) continue;
		for(auto nxt : adj[idx]) {
			int cost = nxt.first, nidx = nxt.second;
			if(d[start][nidx] > d[start][idx] + cost) {
				d[start][nidx] = d[start][idx] + cost;
				pq.push({d[start][nidx], nidx});
			} 
		} 
	} 
} 

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	while(m--) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[to].push_back({cost, from});
	} 

	for(int i = 1; i <= n; i++) {
		fill(d[i], d[i] + n + 1, INF);
		d[i][i] = 0;
		pq.push({d[i][i], i});
		dijk(i);
	} 
	
	int answer = 0;
	for(int i = 1; i <= n; i++) {
		answer = max(answer, d[i][x] + d[x][i]);
	} 

	cout << answer << '\n';
}
