#include <iostream>
#include <cmath>

int main()
{
    int n;
    int S = 0;
    std::cin >> n;
    for(int i = 1; i<= n; i += 1) {
        S += pow(-1, i+1) * i;
    }
    
    std::cout << S;
    return 0;
}