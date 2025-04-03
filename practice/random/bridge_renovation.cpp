// https://codeforces.com/contest/2038/problem/L
#include <iostream>
using namespace std;
#define int long long


signed main() {

    int n; cin >> n;
    int totalPurchased = 0;        
    int num18 = n, num21 = n, num25 = n;

    if (n==1){
        totalPurchased = 2;
    }
    else{
        totalPurchased += num21/2;
        num18 -= num21/2;
        if (num21%2){
            totalPurchased++;
            num18-=2;
        }

        totalPurchased += num18/3;
        totalPurchased += num25/2;

        if(num18%3) totalPurchased++;
        if(num25%2) totalPurchased++; 
        if(num18%3==1 && num25%2) totalPurchased--;

    }
    cout << totalPurchased << endl;

}
/*
  ___________________________________
/ You have literary talent that you \
\ should take pains to develop.     /
 -----------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
 */
