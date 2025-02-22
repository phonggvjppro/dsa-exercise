#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i =1; i<=t;i++) {
        int n;
        cin >> n;
        int j = 2, c = 0;
        cout << "Test " << i <<": ";
        while(n!= 1) {
            if(n % j == 0) {
                while(n % j ==0) {
                    n/= j;
                    c++;
                } 
                cout << j << "(" << c << ") ";
            }
            j++;
            c = 0;
        }
        cout << endl;
    }
}