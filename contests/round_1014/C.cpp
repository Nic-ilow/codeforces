// https://codeforces.com/contest/2092/problem/C
// Solved 20 minutes post Contest :(
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	// ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    int n;
    cin >> t;

    while (t--){
        int temp;
        vector<int> gifts;
        cin >> n;
        int max_val = 0, max_idx=0;
        int num_odds = 0, num_evens=0;

        for (int i=0; i<n; i++){
            cin >> temp; 
            gifts.push_back(temp);
            if (temp%2) num_odds++;
            else num_evens++;
        }

        if (num_evens && num_odds){
            for (int i=0; i<n; i++){
                max_val += gifts[i];
            }
            max_val -= (num_odds-1);
        }
        else {
            for (int i=0; i<n; i++){
                max_val = max(max_val, gifts[i]);
            }
        }

        cout << max_val << endl;
    }

    return 0;
}


/*
 ________________________________________
< Your ignorance cramps my conversation. >
 ----------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
