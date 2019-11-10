// 공약수
#include <bits/stdc++.h>
using namespace std;

int arr[3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
       cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 1; i < arr[n-1]; i++){
        bool isG = true;
       for(int j = 0; j < n; j++){
           if(arr[j] % i != 0)
               isG = false;
       }
       if(isG)
           cout << i << '\n';
    }
}
