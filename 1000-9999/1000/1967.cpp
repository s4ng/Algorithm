// 트리의 지름
#include <bits/stdc++.h>
using namespace std;
bool visited[10001];
vector<pair<int, int>> node[10001];

int diameter = 0;
int maxNode = 0;

void DFS(int m, int cost){
	if(visited[m])
		return;
	visited[m] = true;
	if(diameter < cost){
		diameter = cost;
		maxNode = m;
	} 
	for(int i = 0; i < node[m].size(); i++){
		DFS(node[m][i].first, cost + node[m][i].second);
	} 
} 

int main(){
	int n;
	cin >> n;
	for(int i = 1; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		node[a].push_back({b, c});
		node[b].push_back({a, c});
	} 
	memset(visited, false, sizeof(visited));
	
	DFS(1, 0);
	memset(visited, false, sizeof(visited));
	diameter = 0;
	DFS(maxNode, 0);

	cout << diameter << '\n';
} 
