#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int a = s[0] - '0', b = s[4] - '0', c = s[8] - '0';
    cout << (a + b == c ? "YES" : "NO");
}