// 기상캐스터
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<char> arr(m);
        vector<int> ans;
        for(int j = 0; j < m; j++)
            cin >> arr[j];

        for(int j = m-1; j >= 0; j--){
            int count = 0;
            for(int k = j; k >= 0; k--){
                if(arr[k] == 'c'){
                    ans.push_back(count);
                    break;
                }
                count++;
            }
            if(count >= j+1){
                ans.push_back(-1);
            }
        }
        for(int j = m-1; j >= 0; j--){
            cout << ans[j] << ' ';
        }
        cout << '\n';
    }
}
