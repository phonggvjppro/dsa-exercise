#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for(int i =0; i<s.length();i++) {
        mp[s[i]].push_back(i);
    }

    int c = 0;
    for(int i =0; i<s.length();i++) {
        for(int j = i+1; j< mp[s[i]][1];j++) {
            if(mp[s[j]][0] == j && mp[s[j]][1] > mp[s[i]][1]) c++;
        }
    }
    cout << c;
}

