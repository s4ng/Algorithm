// 프린터 큐
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int n, m, cnt = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			q.push({i, tmp});
			pq.push(tmp);
		} 

		while(!q.empty()){
			int nIdx = q.front().first;
			int nVal = q.front().second;
			q.pop();

			if(pq.top() == nVal){
				cnt++;
				pq.pop();
				if(nIdx == m){
					cout << cnt << '\n';
					break;
				}
			} 
			else{
				q.push({nIdx, nVal});
			} 
		} 
	} 
} 
