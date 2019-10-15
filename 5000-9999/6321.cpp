//IBM 빼기 1
#include <bits/stdc++.h>
using namespace std;

int main(){
	// 입출력 가속화 -----
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q;
	cin >> q;
	for (int i = 1; i <= q; i++) {
		string s, tmp = "";
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			tmp.push_back(s[i] != 90 ? s[i]+1 : 65);
		}
		cout << "String #" << i << '\n' << tmp << "\n\n";
	}
}
