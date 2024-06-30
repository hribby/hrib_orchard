#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    //ifstream cin("tema.in");
    //ofstream cout ("tema.out");
    int c,n;
    cin>>c>>n;
    long long k;
    cin>>k;
    vector<pair<int,int>>v;
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        vector<int>prim;
        if(x>3) {
            if(x %2 ==0){
                while(x%2==0){
                    x=x/2;
                }
                prim.push_back(2);
            }
            for(int j = 3; j*j<=x; j+=2) {
                bool okay = false;
                while(x%j==0) {
                    x=x/j;
                    okay = true;
                }
                if(okay) {
                    prim.push_back(j);
                }
            }
            if(x>1) {
                prim.push_back(x);
            }
            if(prim.front() != prim.back()) {
                v.push_back(make_pair(prim.front(),prim.back()));
            } else {
                v.push_back(make_pair(100,prim.back()));
            }

        } else {
            v.push_back(make_pair(100,x));
        }

    }
    map<int,int>m;

    if(v[0].second !=1) {
        if(v[0].first != 100) {
            m[v[0].first]=0;
        }
        m[v[0].second]=0;
    }
    int rl=0;
    int rr=0;


    for(int i=1; i<v.size(); i++) {
        set<int> torm;
        if(v[i].first == 100) {
            if(v[i].second==1) {
                m.clear();
                if(rl==rr) {
                    rl =i;
                    rr= i;
                }
                continue;
            }
            for(auto kv:m) {
                if(kv.first != v[i].second) {
                    torm.insert(kv.first);
                }
            }
            if(m.count(v[i].second)==0) {
                m[v[i].second]=i;
            }
        } else {
            for(auto kv:m) {
                if(kv.first != v[i].first && kv.first != v[i].second) {
                    torm.insert(kv.first);
                }
            }
            if(m.count(v[i].first)==0) {
                m[v[i].first]=i;
            }
            if(m.count(v[i].second)==0) {
                m[v[i].second]=i;
            }
        }
        for(auto k:torm) {
            m.erase(k);
        }
        int mn =1e9;
        for(auto kv:m) {
            mn =min(mn, kv.second);
        }
        if(i-mn >= rr-rl) {
            rl = mn;
            rr=i;
        }
    }
    cout<<rl +1<<" "<<rr +1<<endl;


    return 0;
}
