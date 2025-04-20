// https://codeforces.com/contest/2096/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        vector<int> l(n);
        vector<int> r(n);
        for (int i=0; i<n; i++) cin >> l[i];
        for (int i=0; i<n; i++) cin >> r[i];
        int ans = 0;
        vector<int> min_vals(n);
        vector<int> max_vals(n);

        for (int i=0; i<n; i++){
            max_vals[i] = max(l[i],r[i]);
            min_vals[i] = min(l[i],r[i]);
        }

        // When you realize the glove compartment is mean :(
        sort(min_vals.begin(), min_vals.end(), greater<int>());

        for (int i=0; i<n; i++){
            if (i<k-1){
                ans += min_vals[i];
            }
            ans += max_vals[i];
        }
        ans++;
        cout << ans << endl;
    }
    return 0;
}


/*
 ________________________________
/ To be or not to be.            \
|                                |
| -- Shakespeare To do is to be. |
|                                |
| -- Nietzsche To be is to do.   |
|                                |
| -- Sartre Do be do be do.      |
|                                |
\ -- Sinatra                     /
 --------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
