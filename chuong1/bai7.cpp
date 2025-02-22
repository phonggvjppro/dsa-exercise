#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        while(!ss.eof()) {
            string temp;
            ss >> temp;
            for(int i =0; i<temp.length();i++) {
                if(i == 0) cout << (char)toupper(temp[i]);
                else cout << (char)tolower(temp[i]);
            }   
            cout << " ";
        }
        cout << '\n';
    }
}