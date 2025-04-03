// https://codeforces.com/problemset/problem/25/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;
 
#define int long long


signed main() {
    int n; cin >> n;
    int x[n];
    int idx = -1;
    for (int i = 0; i < n; i++) cin >> x[i];

    if ((x[0]%2 != x[1]%2) && (x[0]%2 != x[2]%2)) idx = 0;

    else if (idx == -1){
        for (int i = 1; i < n; i++){
            if ((x[i-1]%2 != x[i]%2) && x[i]%2 != x[i+1%2]) {
                idx = i;
                break;
            }
        }
    }
    else idx = n-1;

    cout << idx+1 << endl;

    return 0;
}

/*
 _______________________________________
/ You have an ability to sense and know \
\ higher truth.                         /
 ---------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
