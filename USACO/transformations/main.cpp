/*
ID: anndree1
LANG: C++
TASK: transform
*/
#include <bits/stdc++.h>

using namespace std;
bool okay(vector<string>s,vector<string>res) {
    bool okay = true;
    for(int l = 0; l<s.size(); l++) {
        if(s[l] != res[l]) {
            okay = false;
        }
    }
    return okay;
}
int rotations(vector<string>v,vector<string>s) {
    int siz = v.size();
    for(int i = 0; i<3; i++) {
        vector<string>res(siz);
        for(int j = 0; j < siz; j++) {
            int k = 0;
            for(int o = siz-1; o>=0; o--) {
                res[k].push_back(v[j][o]);
                k++;
            }
        }
        if(okay(s,res)) {
            return i+1;
        } else {
            v = res;
        }
    }
    return -1;
}
vector<string> img(vector<string>v,vector<string>s) {
    int siz = v.size();
    vector<string>res(siz);
    for(int i = 0; i<siz; i++) {
        for(int j = siz-1; j>=0; j--) {
            res[i].push_back(v[i][j]);
        }
    }
    return res;

}

int main() {
    ifstream cin("transform.in");
    ofstream cout("transform.out");
    int n;
    cin>>n;
    vector<string>v(n);
    vector<string>s(n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    for(int i = 0; i<n; i++) {
        cin>>s[i];
    }

    int x = rotations(s,v);
    if(x > 0) {
        cout<<x<<endl;
    } else {
        if(okay(s,v)) {
            cout<<6<<endl;
            return 0;
        }
        vector<string>res = img(v,s);
        if(okay(s,res)) {
            cout<<4<<endl;
        } else if(rotations(s,res) > 0) {
            cout<<5<<endl;
        } else {
            cout<<7<<endl;
        }
    }
    return 0;
}
