#include <iostream>
#include <vector>

using namespace std;

int fibonacciSearch(vector<int>& arr, int key) {
    int n = arr.size();
    int fib2 = 0, fib1 = 1, fib = fib2 + fib1;
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }
    
    int offset = -1;
    while (fib > 1) {
        int i = min(offset + fib2, n - 1);
        if (arr[i] < key) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } else if (arr[i] > key) {
            fib = fib2;
            fib1 -= fib2;
            fib2 = fib - fib1;
        } else return i;
    }
    return (fib1 && arr[offset + 1] == key) ? offset + 1 : -1;
}
