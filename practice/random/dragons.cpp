// https://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
#define int 			long long
using namespace std;
 
#define int long long


signed main() {
    int s, n;
    cin >> s; cin >> n;
    vector<vector<int>> xy;
    int x, y;
    vector<int> temp;
    for (int i = 0; i < n; i++){
        cin >> x;
        cin >> y;
        vector<int> row;
        row.push_back(x);
        row.push_back(y);
        xy.push_back(row);
    } 

    sort(xy.begin(), xy.end(), greater<>());
    bool progress = false;
    int m = xy.size()-1;
    while (m>=0){
        if (s > xy[m][0]){
            s += xy[m][1];
            m--;
            if (m==-1){
                progress = true;
            }
        }
        else{
            break;
        }

    }
    if (progress) cout << "YES" << endl;
    else cout << "NO" << endl;


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

