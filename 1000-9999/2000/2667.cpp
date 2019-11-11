// 단지번호 붙이기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mapArr[25][25];
int size[323];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n;
bool isInside(int a, int b){
    return (a>=0 && a< n) && (b >= 0 && b < n);
}

void dfs(int a, int b, int key){
    mapArr[a][b] = key;
    for(int i = 0; i < 4; i++){
        int dy = a + dir[i][0];
        int dx = b + dir[i][1];
        if(isInside(dy, dx) && mapArr[dy][dx] == 1){
            dfs(dy, dx, key);
        }
    }
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); cout.tie(NULL);
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            scanf("%1d", &mapArr[i][j]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mapArr[i][j] == 1){
                cnt++;
                dfs(i, j, cnt+1);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mapArr[i][j] > 1){
                size[mapArr[i][j] - 2]++;
            }
        }
    }
    sort(size, size + cnt);
    cout << cnt << '\n';
    for(int i = 0; i < cnt; i++){
        cout << size[i] << '\n';
    }
}
