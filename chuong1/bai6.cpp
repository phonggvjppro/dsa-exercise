#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i = 1, mode = -1;
        bool ret = true;
        while(i < s.length()) {
            if(s[i] != s[i-1]) {
                if(mode == -1) {
                    mode = s[i] > s[i-1];
                } else {
                    if(s[i] > s[i-1] != mode) {
                        ret = false;
                        break;
                    }
                }
            }
            i++;
        }
        cout << (ret ? "YES\n" : "NO\n");
    }
}