// 구간 합 구하기 4
#include<bits/stdc++.h>
using namespace std;

int s[100001];

int main(){ 
	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		s[i] = s[i - 1] + tmp;
	} 

	vector<int> answer;
	while(m--) {
		int a, b;
		cin >> a >> b;
		answer.push_back(s[b] - s[a - 1]);
	} 

	for(auto ans : answer) {
		cout << ans << '\n';
	} 
}
