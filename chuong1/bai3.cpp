#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, arr[102];
        cin >> n;
        for(int i = 0; i<n;i++) cin >> arr[i];

        bool ret = true;
        for(int i =0; i<=(n-1)/2;i++) {
            if(arr[i] != arr[n-i-1]) {
                ret = false;
                break;
            }
        }

        cout <<  (ret ? "YES\n" : "NO\n");

    }
}