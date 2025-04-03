// https://codeforces.com/problemset/problem/2050/C
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
        string n; cin >>n;
        int sum = 0;
        int cur;
        unordered_map<int, int> a = {{2,0}, {3,0}};
        for(int i=0; i<n.size(); i++){
            sum+=n[i]-'0';
            if (n[i]=='2') a[2]++;
            if (n[i]=='3') a[3]++;
        }
        sum = sum%9;
        bool found = false;
        if (a[2]>8) a[2]=8;
        if (a[3]>2) a[3] = 2;
        for (int i = 0; i <= a[2]; i++){
            for (int j = 0; j <= a[3]; j++){
                if (((sum+(2*i)+(6*j))%9) == 0){
                    found = true;
                }
            }
        }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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
