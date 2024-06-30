#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0; i < t; i++) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        for(auto e:s) {
            m[e]++;
        }
        if(m['N'] % 2 != m['S'] % 2 || m['W'] % 2 != m['E'] % 2 ||(m['N'] == 1 && m['S'] == 1 && m['W'] + m['E'] == 0)||(m['E'] == 1 && m['W'] == 1 && m['N'] + m['S'] == 0)) {
            cout<<"NO";
        } else {
            int n = 0;
            int e = 0;
            int s2 = 0;
            int w = 0;
            for(auto c: s) {
                if(c == 'N') {
                    if(n == 0) {
                        cout<<"H";
                    } else {
                        cout<<"R";
                    }
                    if(n == 0) {
                        n = 1;
                    } else {
                        n = 0;
                    }
                } else if(c == 'E') {
                    if(e != 0) {
                        cout<<"H";
                    } else {
                        cout<<"R";
                    }
                    if(e == 0) {
                        e = 1;
                    } else {
                        e = 0;
                    }
                } else if(c == 'S') {
                    if(s2 == 0) {
                        cout<<"H";
                    } else {
                        cout<<"R";
                    }
                    if(s2 == 0) {
                        s2 = 1;
                    } else {
                        s2 = 0;
                    }
                } else if(c == 'W') {
                    if(w != 0) {
                        cout<<"H";
                    } else {
                        cout<<"R";
                    }
                    if(w == 0) {
                        w = 1;
                    } else {
                        w = 0;
                    }
                }
            }

        }
        cout<<endl;
    }
    return 0;
}
