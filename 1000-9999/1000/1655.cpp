#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int> max;
    priority_queue<int,vector<int>,greater<int> > min;

	while(n--) {
		int m;
		cin >> m;
		if(max.size() == min.size()) {
			max.push(m);
		} else {
			min.push(m);
		} 
		
		if(max.size() > 0 && min.size() > 0 && max.top() > min.top()){
			int tmpMax = max.top();
			max.pop();
			max.push(min.top());
			min.pop();
			min.push(tmpMax);
		} 
		cout << max.top() << '\n';
	} 
}
