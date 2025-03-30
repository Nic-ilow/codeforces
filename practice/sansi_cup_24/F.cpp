// https://codeforces.com/gym/105642/problem/F

#include <bits/stdc++.h>
#define int long long // Do this because I got hit with to many compiler bs 
using namespace std;

// signed because int == long long

signed getEffort(int val1, int val2){
    if (val2==val1) return 0;
    if (val2>val1) return (3*(val2-val1));
    if (val2<val1) return (val1-val2);
}

signed minVals(vector<int> h){

        int n = h.size();
        int min_effort[n];
        fill_n(min_effort, n, 1000000000);
        min_effort[0] = 0;

        for (int i=0; i<n; i++){

            if (i+1 < n){
                if ((i+1) == (n-1)){
                    min_effort[i+1] = min(min_effort[i+1], min_effort[i]);
                }
                else{
                    min_effort[i+1] = min(min_effort[i+1], min_effort[i] + getEffort(h[i],h[i+1]));
                }
            }

            if (i+2 < n){
                if ((i+2) == (n-1)){
                    min_effort[i+2] = min(min_effort[i+2], min_effort[i]);
                }
                else{
                    min_effort[i+2] = min(min_effort[i+2], min_effort[i] + getEffort(h[i+1],h[i+2]));
                }
            }
            if (i+3 < n){
                min_effort[i+3] = min(min_effort[i+3], min_effort[i] + getEffort(h[i+2],h[i+3]));
            }
        }
        return min_effort[n-1];
}

signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> h;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            h.push_back(temp);
        }
        cout << minVals(h) << endl;
    }
    return 0;
}


/*
 ______________________________________
/ You will be the last person to buy a \
\ Chrysler.                            /
 --------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
