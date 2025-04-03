// https://codeforces.com/contest/379/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b; cin >> a; cin >> b;
    int ans = a;
    int leftover = 0;
    while (a){
        ans += a/b;
        leftover += a%b;
        a /= b;
        if (leftover>=b){
            a += leftover;
            leftover = 0;
        }
    }
    cout << ans << endl;
    return 0;
}


/*
 ______________________________
< Reply hazy, ask again later. >
 ------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
