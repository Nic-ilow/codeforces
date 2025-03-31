// https://codeforces.com/problemset/problem/2067/B
// Needed hint, original file has initial thought process / attempt (almost working)
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
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        int maxVal = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        // Iterate by two since when we move one to the right to bag b we need to block that value in bag a
        for (int i = 0; i < n; i += 2) {
            /* 
            say a starts with a = 2 2 ... , first we lock the twos and say we can make a 3 (maxVal) since our next num can only be >=2
            and a 2 can now be transformed into a 3. If the next two numbers are not some combination of 2 and 3 then it is not possible
            to balance as either we have an extra 2 on the left side, or we have a single three on the left side (or any other ints that
            cannot be increased or balanced) 
            */
            if (max(maxVal, a[i+1]) != max(maxVal, a[i])){
                cout << "No" << endl;
                return;
            }
            // Update the maxVal we can increment to since array is sorted
            maxVal = max(maxVal, a[i]) + 1;
        }

    }
    cout << "Yes" << endl;
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
