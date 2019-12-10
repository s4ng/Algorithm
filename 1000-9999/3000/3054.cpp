// 피터팬 프레임
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char a[5][100];
    string s;
    int index = 0;
    cin >> s;
    for(int i = 1; i <= s.length(); i++ ){
        for(int j =0 ; j < 5; j++){
            for(int k = index; k < index+5; k++){
                if(j == 0 || j == 4){
                   if(k == index+2){
                       if(i % 3 == 0) a[j][k] = '*';
                       else a[j][k] = '#';
                   }
                   else a[j][k] = '.';
                }
                else if(j == 1 || j == 3){
                    if(k == index + 1 || k == index + 3){
                        if(i % 3 == 0) a[j][k] = '*';
                        else a[j][k] = '#';
                    }
                    else a[j][k] = '.';
                }
                else{
                    if(k == index + 2) a[j][k] = s[i-1];
                    else if(k == index || k == index + 4){
                        if(i%3 == 0) a[j][k] = '*';
                        else {
                            if(a[j][k] != '*') a[j][k] = '#';
                        }
                    }
                    else a[j][k] = '.';
                }
            }
        }
        index += 4;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < index+1; j++){
            cout << a[i][j];
        }
        if(i < 4)cout << '\n';
    }
}
