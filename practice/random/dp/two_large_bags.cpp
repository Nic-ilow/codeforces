// https://codeforces.com/problemset/problem/2067/B
// Does not work :(
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
bool dp(vector<int>& a, set<int>& blocked, int idx){
    if (a[0] != a[1]) return false;
    if (idx > a.size()-1) return true;

    if (a[idx]==a[idx+1] && !blocked.count(a[idx])){
        blocked.insert(a[idx]);
        dp(a, blocked, idx+2);
    }
    else if (a[idx-1]==a[idx] && blocked.count(a[idx])){
        a[idx]++;
        dp(a, blocked, idx);
    }
    else if (a[idx-1]!=a[idx] && blocked.count(a[idx])){
        a[idx]++;
        dp(a, blocked, idx+1);
    }
    else {
        return false;
    }
    return true;
}
signed main()
{
    // I was told this was quick af
	// ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int> a;
        set<int> blocked;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        if (dp(a, blocked, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;

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
