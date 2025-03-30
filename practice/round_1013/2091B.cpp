// https://codeforces.com/problemset/problem/2091/B
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	// ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, x;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> x;
        vector<int> strength;

        for (int i=0; i<n; i++){
            int temp;
            cin >> temp;

            strength.push_back(temp);
        }
        
        sort(strength.begin(), strength.end(), greater<>());

        int counter = 0;
        int team_size = 0;

        for (auto val: strength){
            if (val>=x) counter++;
            else {
                team_size++;

                if (team_size * val >= x){
                    counter++;
                    team_size = 0;
                }
            }
        }
        cout << counter << endl;
    }

    return 0;
}


/*
 _____________________________________
/ You display the wonderful traits of \
\ charm and courtesy.                 /
 -------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
