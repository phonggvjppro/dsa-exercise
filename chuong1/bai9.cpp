#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> fl(26,0), dp(53, 0);
    for(int i =0; i<s.length();i++) {
        if(fl[s[i] - 'A'] == 0) {
            fl[s[i] - 'A'] = i+1;
        }
    }

    int ret = 0;
    for(int i =1; i<=s.length();i++) {
        int pos = fl[s[i-1] - 'A'];
        if(pos == i) {
            dp[i] = dp[i-1] + 1;
        } else {
            ret += dp[i-1] - dp[pos];
            for(int j = pos; j < i; j++) dp[j] = dp[j] - 1;
            dp[i] = dp[i-1];
        }
    }

    cout << ret;
}

