#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, a[102], k;
    cin >> n >> k;
    for(int i = 1; i<=n;i++) cin >> a[i];
    int res = 0;
    for(int i = 1 ;i<=n;i++) {
        if(a[i] == k) {
            res = i;
            break;
        }
    }
    cout << res;
    return 0;
}