#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool ret = true, sign;
        int i =1;
        while(s[i] == s[i-1]) i++;
        sign = s[i] > s[i-1];
        for(; i<s.length(); i++) {
            if(s[i] != s[i-1] && (s[i] > s[i-1]) != sign) {
                ret = false;
                break;
            }
        }

        cout << (ret ? "YES\n" : "NO\n");
    }
}