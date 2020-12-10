// 절대값 힙
#include<bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator()(int a, int b){
		return abs(a) < abs(b);
	} 
}; 

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int n;
	cin >> n;
	while(n--){
		int tmp;
		cin >> tmp;
		if(tmp == 0){
			if(pq.empty()){
				cout << 0 << '\n';
			} else {
				cout << pq.top().second << '\n';
				pq.pop();
			} 
		} else {
			pq.push({abs(tmp), tmp});
		} 
	} 
}
