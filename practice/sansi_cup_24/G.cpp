// https://codeforces.com/gym/105642/problem/G
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> groundMap;
    int temp;
    for (int i=0; i<n; i++){
        cin >> temp;
        groundMap.push_back(temp);

    }
    int ans[groundMap.size()];
    
    int waterLevel = 1;

    int lP = 0, rP = n-1;

    while (lP<n){
        if (waterLevel>groundMap[lP]){
            ans[lP] = waterLevel;
            lP++;
        }
        else{
            waterLevel = groundMap[lP]+1;
        }
    }

    waterLevel = 1;

    while (rP>0){
        if (waterLevel>groundMap[rP]){
            ans[rP] = min(ans[rP], waterLevel);
            rP--;
        }    
        else{
            waterLevel = groundMap[rP]+1;
        }
    }

    for (const int val : ans){
        cout << val << " ";
    }

    return 0;
}


/*
  _________________________________
/ AWAKE! FEAR! FIRE! FOES! AWAKE! \
|                                 |
| FEAR! FIRE! FOES!               |
|                                 |
| AWAKE! AWAKE!                   |
|                                 |
\ -- J. R. R. Tolkien             /
 ---------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
