//https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <inttypes.h>
int main() {
    uint64_t n,m,a;
    std::cin >> n;
    std::cin >> m;
    std::cin >> a;

    if (a==1) std::cout<< n*m << std::endl;
    else std::cout << ((n+(a-1)) / a) * ((m+(a-1)) / a) << std::endl;

    return 0;
}
