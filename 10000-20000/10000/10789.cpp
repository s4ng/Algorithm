// 세로읽기
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	string s[5], answer;
	int max = 0;
	for (int i = 0; i < 5; i++) {
		string tmp;
		cin >> tmp;
		if (tmp.size() > max)
			max = tmp.size();
		s[i] = tmp;
	}
		
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (i <= s[j].size() - 1) {
				answer.push_back(s[j][i]);
			}
		}
	}

	cout << answer << '\n';
}
