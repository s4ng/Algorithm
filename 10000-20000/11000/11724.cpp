// 연결 요소의 개수
#include <bits/stdc++.h>
using namespace std;
int n, m;
bool arr[1001][1001] = { 0 };
bool visited[1001] = { 0 };

void bfs(int idx){
	queue<int> q;
	q.push(idx);

	while(!q.empty()){
		int s = q.front();
		q.pop();

		if(visited[s])
			continue;

		visited[s] = true;

		for(int i = 0; i < n; i++){
			if(arr[s][i]){
				q.push(i);
			} 
		} 
	} 
} 

int main(){
	int count = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		arr[a-1][b-1] = arr[b-1][a-1] = true;
	} 

	for(int i = 0; i < n; i++){
		if(visited[i])
			continue;

		bfs(i);

		count++;
	} 

	cout << count << '\n';
} 
