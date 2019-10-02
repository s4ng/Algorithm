//ATM
#include <bits/stdc++.h>
using namespace std;

vector<int> p;
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		p.push_back(tmp);
	}
	sort(p.begin(), p.end());
	for (int i = 1; i < n; i++) {
		p[i] += p[i - 1];
	}
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << sum << '\n';
}