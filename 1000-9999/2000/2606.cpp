// 바이러스
#include <bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool v[101];

int main(){
	queue<int> q;
	int n, m, ans = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a[tmp1].push_back(tmp2);
		a[tmp2].push_back(tmp1);
	}
	v[1] = 1;
	q.push(1);
	while(!q.empty()){
		int l = q.front();
		q.pop();
		ans++;
		for(int i = 0; i < a[l].size(); i++){
			int next = a[l][i];
			if(!v[next]){
				v[next] = 1;
				q.push(next);
			} 
		} 
	} 
	cout << --ans << '\n';
}
