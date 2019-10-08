// 수리공 항승
#include <bits/stdc++.h>
using namespace std;
vector<int> pipe;
int main(){
	// 입출력 가속화 -----
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int q, l, count = 1;
	cin >> q >> l;
	while (q--) {
		int tmp;
		cin >> tmp;
		pipe.push_back(tmp);
	}
	sort(pipe.begin(), pipe.end());
	for (int i = 0, c = 0; i < pipe.size(); i++) {
		if (pipe[i] - pipe[c] >= l) {
			count++;
			c = i;
		}
	}
	cout << count << '\n';
}
