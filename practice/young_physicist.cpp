//https://codeforces.com/problemset/problem/69/A
#include <iostream>
#include <inttypes.h>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> vals = {0, 0, 0};
    int cur_val;
    for (int i=0; i<n; i++){
        for (int k=0; k<3; k++){
            std::cin >> cur_val;
            vals[k] += cur_val;
        }
    }
    for (auto val : vals){
        if (val!=0) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}
