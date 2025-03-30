// https://codeforces.com/problemset/problem/2091/C
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	// ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        if (!(n%2)) cout << -1;
        else{
            for (int i=n; i>0; i--){
                cout << i << " ";

            }
        }
        cout << endl;

    }

    return 0;
}


/*
 _________________________________________
/ Your reasoning powers are good, and you \
\ are a fairly good planner.              /
 -----------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
