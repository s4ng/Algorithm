// 보물
#include<bits/stdc++.h>
using namespace std;
int arr1[51];
int arr2[51];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> arr1[i];
	for(int i = 0; i < n; i++) cin >> arr2[i];

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n, greater<int>());

	int answer = 0;
	for(int i = 0; i < n; i++){
		answer += arr1[i] * arr2[i];
	} 

	cout << answer << '\n';
}
