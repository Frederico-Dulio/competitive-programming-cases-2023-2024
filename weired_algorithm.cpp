#include <iostream>
#include <cmath>
#define ll long long


int main()
{
    ll n;
    std::cin >> n;
    while (n != 1)
    {
        std::cout<< n << " ";
        (!(n & 1)) ? n = n/2 : n = n*3 + 1;
    }
    std::cout << n <<"\n";
    return 0;
}