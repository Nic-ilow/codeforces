// https://codeforces.com/contest/2090/problem/B
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
        int n, m;
        string filler;
        cin >> n;
        cin >> m;
        vector<string> init_state;
        for (int i=0; i<n; i++){
            cin >> filler;
            init_state.push_back(filler); 
        }
        bool valid = true;
        for (int i=n-1; i>0; i--){
            for (int j=m-1; j>0; j--){
                bool leftValid = true;
                bool topValid = true;

                if (init_state[i][j] == '1'){
                    if (init_state[i-1][j] == '0' && init_state[i][j-1] == '0'){
                        valid = false;
                        break;
                    }

                    if (init_state[i-1][j] == '1'){
                        for (int k=i-1; k>=0; k--){
                            if (init_state[k][j] == '0'){
                                leftValid = false;
                                break;
                            }
                        } 
                    }
                    else leftValid = false;
                    if (init_state[i][j-1] == '1'){
                        for (int k=j-1; k>=0; k--){
                            if (init_state[i][k] == '0'){
                                topValid = false;
                                break;
                            }
                        } 
                    }
                    else topValid = false;

                    if (!topValid && !leftValid){
                        valid = false;
                        break;
                    }
                }
            }
            if (!valid) break;
        }
        if (valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


/*
 ______________________________________
/ You will remember something that you \
\ should not have forgotten.           /
 --------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
                ||     || 
*/
