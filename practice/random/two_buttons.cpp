// https://codeforces.com/contest/520/problem/B
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main() {

    int n, m; cin >> n; cin >> m;
    int ans = 0;
    if (m<n) ans = n-m;
    else if (n*2 == m) ans = 1;
    else{
        while (m>n){
            if (m%2){
                m++;
            }
            else{
                m/=2;
            }
            ans++;
        }
        if (n!=m){
            ans += (n-m);
        }
    }

    cout << ans << endl;

    return 0;
}

/*
 ____________________
< Beware of Bigfoot! >
 --------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
