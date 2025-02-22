#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ret = 0;
        for(int i =1 ;i<=sqrt(n);i++) {
            if(n % i != 0) continue;
            if(i % 2 == 0) ret++;
            if(i*i != n && (n/i) % 2 == 0) ret++;
        }
        cout << ret << endl;
    }
}

