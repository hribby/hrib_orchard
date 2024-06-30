#include <bits/stdc++.h>

using namespace std;
//#define int int64_t
long double dist(long long  x1, long long y1) {
    return sqrt(x1*x1 + y1*y1);
}
int32_t main() {
    //ifstream cin("castel.in");
    //ofstream cout ("castel.out");
    int n;
    cin>>n;
    vector<vector<int>>v;
    vector<vector<int>>l;
    for(int i = 0; i<n+1; i++) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        v.push_back({a,b,c,d});
        if(i == 0) {
            l.push_back({a,b,c,d});
            continue;
        }
        int x1 = max(v[i][0],l[i-1][0]);
        int y1 = min(v[i][1],l[i-1][1]);
        int x2 = min(v[i][2],l[i-1][2]);
        int y2 = max(v[i][3],l[i-1][3]);
        if(x1 > x2 || y1<y2) {
            l.push_back({-1,-1,-1,-1});
            continue;
        }
        if(y1<y2) {
            l.push_back({x2,y2,x1,y1});
        } else {
            l.push_back({x1,y1,x2,y2});
        }
    }
    for(int i = n-1; i>=0; i--) {
        int x1 = max(v[i][0],v[i+1][0]);
        int y1 = min(v[i][1],v[i+1][1]);
        int x2 = min(v[i][2],v[i+1][2]);
        int y2 = max(v[i][3],v[i+1][3]);
        if(x1 > x2 || y1<y2) {
            v[i]= {-1,-1,-1,-1};
            continue;
        }
        if(y1<y2) {
            v[i] = {x2,y2,x1,y1};
        } else {
            v[i]= {x1,y1,x2,y2};
        }
    }
    pair<int,int>fnal;
    fnal = {1e9,1e9};
    long double d = 1e9;
    if(v[0][0] != -1) {
        fnal = {v[0][0],v[0][3]};
        d = dist(fnal.first,fnal.second);
    }
    int x1,x2,y1,y2;
    for(int i = 0; i<=n; i++) {
        if(i == 0) {
            x1 = v[i+1][0];
            y1 = v[i+1][1];
            x2 = v[i+1][2];
            y2 = v[i+1][3];
        } else if(i == n) {
            x1 = l[i-1][0];
            y1 = l[i-1][1];
            x2 = l[i-1][2];
            y2 = l[i-1][3];
        } else {
            x1 = max(l[i-1][0],v[i+1][0]);
            y1 = min(l[i-1][1],v[i+1][1]);
            x2 = min(l[i-1][2],v[i+1][2]);
            y2 = max(l[i-1][3],v[i+1][3]);
        }
        if(x1 >x2 || y1<y2) {
            continue;
        }
        long double s = dist(x1,y2);
        if(y1 < y2) {
            int a = x1;
            x1 = y2;
            y2 = a;
        }
        if(s < d && x1 != -1 && y2 != -1) {
            d = s;
            fnal= {x1,y2};
        }
    }
    if(fnal.first == 1e9 || fnal.second == 1e9) {
        cout<<"NU"<<endl;
    } else {
        cout<<fnal.first<<" "<<fnal.second<<endl;

    }

    return 0;
}
