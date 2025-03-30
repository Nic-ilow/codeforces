// https://codeforces.com/contest/2091/problem/D
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--){
        int n,m,k;
        cin >> n >> m >> k;

        int lo = 0;
        int hi = m;
        int mid;

        if (n==1 && m==k){
            cout << m << endl;
        }

        else {
            while (lo + 1 < hi){
                mid = (lo + hi) / 2;
                if (((m/(mid+1))*mid + m%(mid+1))*n >= k){
                    hi = mid;
                }
                else{
                    lo = mid;
                }
            }
            cout << hi << endl;
        }
    }

    return 0;
}


/*
 ___________________________________
/ That secret you've been guarding, \
\ isn't.                            /
 -----------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
