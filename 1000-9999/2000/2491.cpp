// 수열
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[100001] = {0};
	int dpUp[100001] = {0};
	int dpDown[100001] = {0};
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	} 
	dpUp[0] = 1; 
	dpDown[0] = 1;
	int maxUp = 1, maxDown = 1;
	for(int i = 1; i < n; i++) {
		if(arr[i] >= arr[i - 1])	{
			dpUp[i] = ++dpUp[i - 1];
		} else {
			dpUp[i] = 1;
		} 
		if(arr[i] <= arr[i - 1]) {
			dpDown[i] = ++dpDown[i - 1];
		} else {
			dpDown[i] = 1;
		} 
		maxUp = max(maxUp, dpUp[i]);
		maxDown = max(maxDown, dpDown[i]);
	} 

	cout << (maxUp > maxDown ? maxUp : maxDown) << '\n';
}
