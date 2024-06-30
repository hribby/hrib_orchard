/*
ID: anndree1
TASK: gift1
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("gift1.in");
    ofstream cout("gift1.out");
    int np;
    cin>>np;
    map<string,int>pers;
    vector<string>v;
    for(int i = 0; i<np; i++) {
        string a;
        cin>>a;
        pers[a] = 0;
        v.push_back(a);
    }
    for(int i = 0; i<np; i++) {
        string n;
        cin>>n;
        int m,p;
        cin>>m>>p;
        if(p > 0) {
            int k = m / p;
            pers[n] -= m;
            pers[n] += m % p;
            for(int j = 0; j < p; j++) {
                string s;
                cin>>s;
                pers[s] += k;
            }
        } else {
            pers[n] += m;
        }
    }
    for(auto e:v) {
        cout<< e <<" "<<pers[e]<<endl;
    }
    return 0;
}
