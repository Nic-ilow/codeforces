// https://codeforces.com/contest/1272/problem/C
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k; cin >> n; cin >> k;
    string s; cin >> s;

    set<char> availableLetters;
    set<string> substrings;
    int inAvailable[n];

    for (int i = 0; i < n; i++){
        char temp; cin >> temp; availableLetters.insert(temp);
    }
    for (int i = 0; i < n; i++){
        if (availableLetters.count(s[i])) inAvailable[i] = 1;
        else inAvailable[i] = 0;
    } 
    
    int ans = 0;
    int consecutive = 0;
    for (int i = 0; i < n; i++){
        if (inAvailable[i]) consecutive++;
        else{
            ans += consecutive*(consecutive+1)/2;
            consecutive = 0;
        }
    }
    ans += consecutive*(consecutive+1)/2;


    cout << ans << endl;
    return 0;
}


/*
 ____________________________________
/ You will gain money by a fattening \
\ action.                            /
 ------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
