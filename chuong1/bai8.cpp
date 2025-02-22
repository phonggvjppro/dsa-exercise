#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        vector<string> v;
        string s;
        getline(cin, s);

        stringstream ss(s);
        while(!ss.eof()) {
            string temp;
            ss >> temp;
            string newS = "";
            for(int i =0; i<temp.length();i++) {
                if(i == 0) newS += (char)toupper(temp[i]);
                else newS += (char)tolower(temp[i]);
            }   
            v.push_back(newS);
        }
        for(int i =1; i<v.size();i++) {
            cout << v[i] << ( i == v.size()-1 ? ", " : " ");
        }
        for(int i = 0; i<v[0].size();i++) {
            cout << (char)toupper(v[0][i]);
        }
        cout << endl;
    }
}