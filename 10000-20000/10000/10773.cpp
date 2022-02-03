// 제로
#include<bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;

	stack<int> st;
	for(int i = 0; i < k; i++) {
		int tmp;
		cin >> tmp;
		if(tmp == 0) {
			st.pop();
		} else {
			st.push(tmp);
		} 
	} 

	int total = 0;
	while(!st.empty()) {
		total += st.top();
		st.pop();
	} 

	cout << total << '\n';
}
