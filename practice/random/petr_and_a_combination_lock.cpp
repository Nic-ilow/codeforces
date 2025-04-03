// https://codeforces.com/contest/1097/problem/B
#include <bits/stdc++.h>
#define int 			long long
using namespace std;
int cando;
// signed because int == long long
void dfSearch(int i, int a[], int ans, int n){
    if (i == n+1){
        if (!(ans%360)) cando = 1;
        return;
    }
    dfSearch(i+1, a, ans+a[i], n);
    dfSearch(i+1, a, ans-a[i], n);
}
signed main()
{
    // I was told this was quick af
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    dfSearch(1, a, ans, n);

    if (cando) cout << "YES";
    else cout << "NO";
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
