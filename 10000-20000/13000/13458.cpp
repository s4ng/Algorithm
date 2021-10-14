// 시험 감독
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, b, c, tmp;
	long long answer = 0;
	vector<int> tester;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		tester.push_back(tmp);
	} 
	cin >> b >> c;

	for(int i = 0; i < n; i++) {
		int t = tester[i];
		t -= b;
		answer++;
		if(t > 0) {
			if(t % c == 0) {
				answer += t / c;
			} else {
				answer += t / c + 1;
			} 
		} 
	} 

	cout << answer << '\n';
}
