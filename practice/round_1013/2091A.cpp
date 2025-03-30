// https://codeforces.com/problemset/problem/2091/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--){

        unordered_map<int, int> req_nums;
        int n;
        cin >> n;
        int idx = 0;
        bool found = false;
        for (int i=0; i<n; i++){
            int drawn;
            cin >> drawn;

            req_nums[drawn]++;

            if (req_nums[0] >= 3 && req_nums[5] >= 1 && req_nums[3] >= 1 && req_nums[2] >= 2 && req_nums[1] >= 1 && !found) {
                idx = i+1;
                found = true;
            }

        }

        cout << idx << endl; 

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
