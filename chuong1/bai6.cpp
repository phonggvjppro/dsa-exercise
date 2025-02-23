#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        bool inc = true, dec = true;
        for(int i = 1; i<s.length();i++) {
            if(s[i] > s[i-1]) dec = false;
            else if(s[i] < s[i-1]) inc = false;
        }
        cout << (inc || dec ? "YES\n" : "NO\n");
    }
}