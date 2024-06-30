/*
ID: anndree1
LANG: C++
TASK: wormhole
*/
#include <bits/stdc++.h>
using namespace std;
int c=0;
vector<pair<int,int>>v;
vector<int> nxt;
int n;
bool vst[32];

int check(int val, vector<pair<int,int>>& res) {
    int f =-1;
    for(auto p: res){
        if(p.first == val){
           f =p.second;
            break;
        }
        if(p.second == val){
           f =p.first;
            break;
        }
    }
    if(nxt[f] ==-1){
        return 0;
    }
    if(vst[f]){
        return 1;
    }
    vst[f] = true;
    return check(nxt[f],res);
}

void solve(vector<pair<int,int>>& res) {
    for(int i=0;i<res.size();i++){
            for(int j = 0;j<n;j++){
                vst[j] = false;
            }
            int r = check(res[i].first,res);
            if(r ==0){
                for(int j = 0;j<n;j++){
                    vst[j] = false;
                }
                r = check(res[i].second, res);
            }
            if(r >0){
                c+=1;
                return;
            }

    }
}


void gen(set<int> &avl, vector<pair<int,int>>& res) {
    if(avl.empty()) {
        solve(res);
        return;
    }
    set<int> left=avl;
    for(auto e1:left) {
        if(res.empty() || res.back().first < e1) {
            avl.erase(e1);
            for(auto e2:left) {
                if(e1 < e2) {
                    avl.erase(e2);
                    res.push_back({e1,e2});
                    gen(avl,res);
                    res.pop_back();
                    avl.insert(e2);
                }
            }
            avl.insert(e1);
        }
    }
}

int main() {
    //ifstream cin("wormhole.in");
    //ofstream cout("wormhole.out");

    cin>>n;
    set<int> avl;
    vector<pair<int,int>>res;
    int a,b;
    for(int i = 0; i<n; i++) {
        cin>>a>>b;
        v.push_back({a,b});
        nxt.push_back(-1);
        avl.insert(i);
    }
    for(int i = 0; i<n; i++) {
        int crt =-1;
        int vcrt = 1e9;
        for(int j = 0; j<n; j++) {
            if(i!= j) {
                if(v[i].second == v[j].second && v[i].first < v[j].first && v[j].first < vcrt) {
                    crt =j;
                    vcrt = v[j].first;
                }
            }
        }
        nxt[i] = crt;
    }

    gen(avl,res);
    cout<<c<<endl;
    return 0;
}
