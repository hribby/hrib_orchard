/*
ID: anndree1
LANG: C++
TASK: combo
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>elements(vector<int>combo,int n) {
    vector<vector<int>>pw1(3);
    map<int,int>m;
    int j = 0;
    for(auto e:combo) {
        int k = e-1;
        pw1[j].push_back(e);
        m[e]++;
        for(int i = e+1; i<=e+2; i++) {
            int q = i;
            while(q > n) {
                q-=n;
            }
            if(m[q] == 0) {
                pw1[j].push_back(q);
            }
            m[q]++;
            int p = k;
            while(p < 1) {
                p +=n;
            }
            if(m[p] == 0) {
                pw1[j].push_back(p);
            }
            m[p]++;
            k--;
        }
        m.clear();
        j++;
    }
    return pw1;

}
int main() {
    ifstream cin("combo.in");
    ofstream cout("combo.out");

    int n;
    cin>>n;

    vector<int>combo(3);
    for(int i = 0; i<3; i++) {
        cin>>combo[i];
    }

    vector<int>mcombo(3);
    for(int i = 0; i<3; i++) {
        cin>>mcombo[i];
    }
    vector<vector<int>>pw1 = elements(combo,n);
    vector<vector<int>>pw2 = elements(mcombo,n);
    vector<vector<int>>comon(3);
    int y = pw1[0].size();
    int x = pw1[1].size();
    int z = pw1[2].size();
    int res = x*y*z;
    y = pw1[0].size();
    x = pw1[1].size();
    z = pw1[2].size();
    res += (x*y*z);

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<pw1[i].size(); j++) {
            int p = pw1[i][j];
            for(int k = 0; k<pw2[i].size(); k++) {
                int q = pw2[i][k];
                if(pw1[i][j] == pw2[i][k]) {
                    comon[i].push_back(pw1[i][j]);
                }
            }
        }
    }
    if(comon[0].size() > 0 && comon[1].size() > 0 && comon[2].size() > 0) {
        y = comon[0].size();
        x = comon[1].size();
        z = comon[2].size();
        res -= (x*y*z);
    }
    cout<<res<<endl;
    return 0;
}
