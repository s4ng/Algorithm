// 어린왕자
#include <bits/stdc++.h>
using namespace std;
int arr[51][3];

double checkDis(int x1, int y1, int x2, int y2){
	double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return dis;
} 

int main(){
	int n;
	cin >> n;
	while(n--){
		int x1, y1, x2, y2;
		int k, cnt = 0;
		cin >> x1 >> y1 >> x2 >> y2 >> k;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < 3; j++){
				cin >> arr[i][j];
			} 
		} 
		for(int i = 0; i < k; i++){
			int x3 = arr[i][0];
			int y3 = arr[i][1];
			int dis1 = checkDis(x1, y1, x3, y3);
			int dis2 = checkDis(x2, y2, x3, y3);
			if(dis1 < arr[i][2] && dis2 < arr[i][2])
				continue;
			if(dis1 < arr[i][2] || dis2 < arr[i][2])
				cnt++;
		} 
		cout << cnt << '\n';
	} 
}
