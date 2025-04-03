// https://codeforces.com/contest/2092/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    int n;
    cin >> t;
    while (t--){
        int max_pleasure = -1;
        cin >> n;
        int temp; 
        vector<int> beauty;
        for (int i=0; i<n; i++){
            cin >> temp; 
            beauty.push_back(temp);
        }

        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                max_pleasure = max(max_pleasure, abs(beauty[i]-beauty[j]));
            }
        }
        cout << max_pleasure << endl;
    }
    
    return 0;
}


/*
 _______________________________
/ Civilization is the limitless \
| multiplication of unnecessary |
| necessities.                  |
|                               |
\ -- Mark Twain                 /
 -------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
