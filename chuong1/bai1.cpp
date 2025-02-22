#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int u = ucln(a,b);
        cout << u << " " << (long long)a * b / u << endl;
    }
}