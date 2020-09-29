// 숨바꼭질
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000 + 1;
bool visited[MAX];

int main(){
	int n, k, ans;
	cin >> n >> k;

	queue<pair<int, int>> q;
	q.push({n, 0});
	visited[n] = true;

	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		if(a == k){
			ans = b;
			break;
		} 
		
		if(a + 1 < MAX && !visited[a + 1]){
			q.push({a+1, b+1});
			visited[a+1] = true;
		} 
		if(a - 1 >= 0 && !visited[a - 1]){
			q.push({a-1, b+1});
			visited[a-1] = true;
		} 
		if(a * 2 < MAX && !visited[a * 2]){
			q.push({a*2, b+1});
			visited[a*2] = true;
		} 
	} 

	cout << ans << '\n';
	return 0;
}
