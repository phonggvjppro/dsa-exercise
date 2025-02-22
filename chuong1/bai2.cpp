#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a;
        cin >> a;

        int l = a % 10;
        while( a>=10) {
            a/=10;
        }
        
        cout <<  (a == l ? "YES\n" : "NO\n");
    }
}