#include <bits/stdc++.h>
using namespace std;

#define vec vector

typedef int64_t i6;
typedef uint64_t u6;
typedef vec<i6>  vi6;
typedef vec<vi6>  vv;
typedef pair<i6,i6>  p6;
typedef vec<p6>  vp6;

p6 solve(const vi6& v) {
    p6 ans = {0,0};
    vp6 comb = {{0,1},{2,3},{0,3},{1,2},{1,0},{3,2},{3,0},{2,1}};
    for(auto e: comb) {
        if(v[e.first]*10+v[e.second] > ans.first*10+ans.second ) {
            ans = {v[e.first],v[e.second]};
        }
    }
    return ans;
}


int main() {
    ifstream cin{"inimi.in"};
    ofstream cout{"inimi.out"};

    i6 n;
    cin >> n;

    vv v1(n, vi6(4));
    vv v2(n, vi6(4));


    for(i6 i = 0; i < n; i++) {
        for(i6 j=0; j<4; j++) {
            cin>>v1[i][j];
        }
    }
    for(i6 i = 0; i < n; i++) {
        for(i6 j=0; j<4; j++) {
            cin>>v2[i][j];
        }
    }

    p6 ans1 = {0,0};
    p6 ans2 = {0,0};
    for(i6 i = 0; i < n; i++) {
        p6 crt1 = solve(v1[i]);
        if(crt1.first*10+crt1.second > ans1.first*10+ans1.second) {
            ans1 = crt1;
        }

        p6 crt2 = solve(v2[i]);
        if(crt2.first*10+crt2.second > ans2.first*10+ans2.second) {
            ans2 = crt2;
        }
    }

    if(ans1.first*10+ans1.second >= ans2.first*10+ans2.second) {
        cout<<ans1.first*1000+ans1.second*100+ans2.first*10+ans2.second;
    } else {
        cout<<ans2.first*1000+ans2.second*100+ans1.first*10+ans1.second;
    }
    return 0;
}



