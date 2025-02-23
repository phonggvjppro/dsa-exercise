#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    getchar();
    while(n--) {
        string s;
        getline(cin, s);
        vector<string> v;

        bool newWord = true;
        string temp = "";
        for(int i =0; i<s.length();i++) {
            if(s[i] == ' ') {
                if(temp.length() > 0) v.push_back(temp);
                temp  = "";
                newWord = true;
            } else {
                if(newWord) temp += toupper(s[i]);
                else temp += tolower(s[i]);
                newWord = false;
            }
        }
        if(temp.length() > 0) v.push_back(temp);
        for(auto ss : v) {
            cout << ss << " ";
        }
        cout << '\n';
    }
}