// 수 찾기
#include <bits/stdc++.h>
using namespace std;

vector<int> a;

// 이분탐색 
int binarySearch(int low, int high, int target){
	if (low > high)
		return 0;
	else
	{
		int mid = (low + high) / 2;
		if (a[mid] == target) return 1;
		else if (a[mid] > target) return binarySearch(low, mid - 1, target);
		else return binarySearch(mid + 1, high, target);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int t; cin >> t;
		cout << binarySearch(0, n - 1, t) << '\n';
	}
	return 0;
}
