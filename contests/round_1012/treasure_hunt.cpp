// https://codeforces.com/contest/2090/problem/A
// this includes almost everythin you'll need in life
#include <bits/stdc++.h>

// most used macros
#define int 			long long
#define pb				push_back
#define all(a)			(a).begin(), (a).end()
#define srt(a)			sort(all(a))
#define f 				first
#define s 				second
#define forn(i, n)			for(int i = 0; i < n; i++)
#define fore(i, b, e)	for(int i = b; i < e; i++)

// also to type faster
using namespace std;
typedef pair<int, int>  ii;
typedef vector<int>     vi;

// signed because now int is always long long
signed main()
{
    // fast input for cin cout
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--){
        int x,y,a;
        cin >> x;
        cin >> y;
        cin >> a;

        bool counter = 1;
        while (a>(-1)){
            if (counter) a -= x;
            else a -= y;
            counter ^= 1;
        }
        if (counter) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}


/*
______________________________________
/ The ripest fruit falls first.        \
|                                      |
\ -- William Shakespeare, "Richard II" /
 --------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     || 
*/
