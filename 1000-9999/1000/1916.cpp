// 최소비용 구하기
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int INF = 1e9 + 10;

vector<pii> adj[1005];
priority_queue<pii, vector<pii>, greater<pii>> pq;
int d[1005];

int main(){
	int n, m;
	cin >> n >> m;

	while(m--) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[from].push_back({cost, to});
	} 

	int st, en;
	cin >> st >> en;

	fill(d, d + n + 1, INF);

	d[st] = 0;
	pq.push({d[st], st});
	while(!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		int dist = cur.first, idx = cur.second;
		for(auto next : adj[idx]) {
			int cost = next.first, nidx = next.second;
			if(d[nidx] > dist + cost) {
				d[nidx] = dist + cost;
				pq.push({d[nidx], nidx});
			} 
		} 
	} 

	cout << d[en] << '\n';
}
