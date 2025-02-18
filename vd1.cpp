#include <iostream>

int main()
{
    int n;
    double S = 0;
    std::cin >> n;
    for(int i = 0; i<= n; i += 1) {
        double temp = (double)(2*i+1) / (2*i+2);
        S += temp;
    }
    
    std::cout << S;
    return 0;
}