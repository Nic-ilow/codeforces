//https://codeforces.com/problemset/problem/1985/C
#include <iostream>
#include <inttypes.h>
#include <vector>
#include <unordered_map>
#include <math.h>
int main() {
    int t,n;
    std::cin >> t;
    for(int i=0; i<t; i++){

        int res=0;
        std::cin >> n;

        uint64_t sumVal = 0;
        int maxVal = -1;

        for (int j=0; j<n; j++){
            int populator;
            std::cin >> populator;
            sumVal += populator;
            maxVal = std::max(populator, maxVal);
            if(sumVal - maxVal == maxVal){
                res++;
            }
        }
        std::cout << res << std::endl;
    }
    return 0;
}
