// https://codeforces.com/gym/105642/problem/D
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, ans=0;
    cin >> n;

    set<string> og9 = {"ch", "lp", "cbba", "or", "pt" ,"tja", "scz", "be", "pd"};
    while(n--){
        string name;
        cin >> name;

        if (!og9.count(name)) ans++;
    }
    cout << ans << endl;

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
