// https://codeforces.com/contest/189/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;
 
#define int long long


signed main() {
    int n, a, b, c;
    cin >> n; cin >> a; cin >> b; cin >> c;
    vector<int> dp(n+1, -1000000);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i){
        if (i>=a){
            dp[i] = max(dp[i], dp[i-a] + 1);
        }
        if (i>=b){
            dp[i] = max(dp[i], dp[i-b] + 1);
        }
        if (i>=c){
            dp[i] = max(dp[i], dp[i-c] + 1);
        }
    }

    cout << dp.back() << endl;

    return 0;
}

/*
 _________________________________________
/ Your depth of comprehension may tend to \
\ make you lax in worldly ways.           /
 -----------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
