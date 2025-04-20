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
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int max_val = n; int min_val = 1;

        vector<int> a(n);
        for (int i=n-2; i>=0; i--){
            if (s[i]=='<'){
                a[i+1] = min_val;
                min_val++;
            }
            else{
                a[i+1] = max_val;
                max_val--;
            }
        }
        a[0] = min_val;
        for(auto val : a){
            cout << val << ' ';
        }
        cout << endl;
    }
    return 0;
}


/*
 ______________________________________
/ Artistic ventures highlighted. Rob a \
\ museum.                              /
 --------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
