// 진짜 메시지
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define MAX_SIZE 100
#define INF 0x7fffffff
#define CENDL "\n"
char table[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;

        const int size = s.size();

        memset(table, 0 , sizeof(table));

        bool check = false;
        for (int i=0; i<size; i++) {
            char code = s[i] - 'A';
            table[code]++;
            if (table[code] == 3) {

                if (i + 1 < size && s[i] != s[i+1]) {
                    check = true;
                    break;
                } else if (i + 1 < size && s[i] == s[i+1]) {
                    table[code] = -1;
                } else if (i + 1 >= size) {
                    check = true;
                    break;
                }
            }
        }

        if (check) {
            cout << "FAKE" << CENDL;
        } else {
            cout << "OK" << CENDL;
        }
    }

}
