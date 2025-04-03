// https://codeforces.com/contest/514/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;
 
#define int long long


signed main() {
    string x; cin >> x;
    unordered_map<char, char> replace_map = {{'5', '4'}, {'6', '3'}, {'7', '2'}, {'8','1'}, {'9','0'}};
    for (int i = 0; i < x.size(); i++){
        if (x[i] == '9' && i==0) cout << '9';
        else if (replace_map.count(x[i])) cout << replace_map[x[i]];
        else cout << x[i];
        
    }
    return 0;
}

/*
 ____________________
< Beware of Bigfoot! >
 --------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
