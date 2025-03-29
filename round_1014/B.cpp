// https://codeforces.com/contest/2092/problem/B
#include <bits/stdc++.h>
#define int 			long long
using namespace std;

// signed because int == long long
signed main()
{
    // I was told this was quick af
	// ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        string a,b;
        cin >> a;
        cin >> b;
        
        int aOddOnes = 0;
        int bOddZeros = 0;
        int aEvenOnes = 0;
        int bEvenZeros = 0;


        for (int i=0; i<n; i=i+2){
            if (a[i]=='1') aEvenOnes++;
            if (b[i]=='0') bEvenZeros++;
        }

        for (int i=1; i<n; i=i+2){
            if (a[i]=='1') aOddOnes++;
            if (b[i]=='0') bOddZeros++;
        }

        if (aEvenOnes > bOddZeros || aOddOnes > bEvenZeros) cout << "NO" << endl;
        else cout << "YES" << endl;

        // cout << "t: " << t << " aEven1: " << aEvenOnes << " bOdd0: " << bOddZeros << endl;
        // cout << "t: " << t << " aOdd1: " << aOddOnes << " bEven0: " << bEvenZeros << endl;
    }



    return 0;
}


/*
 _________________________________________
/ You have a deep interest in all that is \
\ artistic.                               /
 -----------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/
