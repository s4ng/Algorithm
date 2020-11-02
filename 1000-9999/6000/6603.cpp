// 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[14] = {0};
int lotto[6];
int num;

void dfs(int n, int depth){
	if(depth == 6){
		for(int i = 0; i < 6; i++)
			cout << lotto[i] << ' ';
		cout << '\n';
		return;
	} 
	
	for(int i = n; i < num; i++){
		lotto[depth] = arr[i];
		dfs(i+1, depth+1);
	} 
} 

int main(){
	while(true){
		cin >> num;
		if(num == 0) break;

		for(int i = 0; i < num; i++)
			cin >> arr[i];

		dfs(0, 0);
		cout << '\n';
	} 
} 
