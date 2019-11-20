#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <math.h>
#include <memory.h>
 
using namespace std;
 
#define MAX_SIZE 100
#define INF 0x7fffffff
#define CENDL "\n"
#define ll long long
 
int main() {
    
    cin.tie(0);
    std::ios::sync_with_stdio(false);
 
    int n, c; cin >> n >> c;
 
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
 
    int sol = 0;
    for (int i = 1; i<=c; i++) {
 
        int cand = 0;
        for (int j=0; j<n; j++) {
            if (i % arr[j] == 0) {
                cand++;
            }
        }
 
        if (cand) {
            sol++;
        }
    }
 
    cout << sol << CENDL;
 
    return 0;
}
