// 미로 탐색
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
int Map[100][100] = {0, };
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, 1, -1};

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1) continue;
            if(Map[nx][ny] == 1){
                q.push(make_pair(nx, ny));
                Map[nx][ny] = Map[x][y] + 1;
            }
        }
    }
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); cout.tie(NULL);
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &Map[i][j]);
        }
    }

    Map[0][0] = 2;
    bfs(0, 0);

    printf("%d\n", Map[n-1][m-1]-1);
}
