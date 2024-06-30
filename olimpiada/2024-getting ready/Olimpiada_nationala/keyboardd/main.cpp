#include <bits/stdc++.h>

using namespace std;

int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int i = 0;
    int j = 0;
    vector<char>v;
    while(j<t.size()) {
        if(s[i] != t[j]) {
            bool okay = false;
            for(int k = 0; k<v.size(); k++) {
                if(t[j] == v[k]) {
                    okay = true;
                    break;
                }
            }
            if(!okay) {
                cout<<t[j];
                v.push_back(t[j]);
            }

            j++;
        } else {
            i++;
            j++;
        }
    }
    return 0;
}
