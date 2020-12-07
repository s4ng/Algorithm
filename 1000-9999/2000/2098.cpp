// 외판원 순회
#include<bits/stdc++.h>
using namespace std;
int N;
const int inf = 1000000000;
int W[16][16];
int dp[16][1 << 16];

int TSP(int curr, int visited){
	int result;
	int ret = dp[curr][visited];

	if(ret != 0)
		return ret;

	if(visited == (1 << N) - 1){
		if(W[curr][0] != 0)
			return W[curr][0];
		return inf;
	} 

	ret = inf;
	for(int i = 0; i < N; i++){
		if((visited & 1<<i) || (W[curr][i] == 0))
			continue;
		result = TSP(i, (visited | 1<<i)) + W[curr][i];
		if(result < ret)
			ret = result;
	} 
	dp[curr][visited] = ret;

	return ret;
} 

int main(){
	cin >> N;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++) cin >> W[i][j];
	
	int answer = TSP(0, 1);
	cout << answer << '\n';
	
}
