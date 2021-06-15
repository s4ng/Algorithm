// 플로이드
#include<bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
int arr[101][101];

int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(i == j)
				arr[i][j] = 0;
			else
				arr[i][j] = INF;
		} 
	} 

	for(int i = 0; i < m; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		arr[from][to] = min(arr[from][to], cost);
	} 

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			for(int k = 1; k <= n; k++) {
				if(i == j || i == k) 
					continue;
				arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
			} 
		} 
	} 

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(arr[i][j] == INF)
				cout << 0 << ' ';
			else
				cout << arr[i][j] << ' ';
		} 
		cout << '\n';
	} 
}
