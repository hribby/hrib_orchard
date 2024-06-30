#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;

const i64 MOD = 100019;

inline i64 add(i64 x, i64 y) {
    return ((x%MOD) + (y%MOD)) % MOD;
}

inline i64 mul(i64 x, i64 y) {
    return ((x%MOD) * (y%MOD)) % MOD;
}
i64 pow(i64 a, i64 b){
       if(b == 0){
            return 1;
       }
       if(b % 2 == 0){
          i64 r = pow(a,b / 2);
          return mul(r,r);
       }
       i64 r = pow(a,(b-1) / 2);
       r = mul(r,r);
       return mul(r , a);
}

int main() {
    ifstream cin("puteri2.in");
    ofstream cout("puteri2.out");
    i64 n;
    cin >> n;
    vector<i64>a(n);
    for(i64 i = 0;i < n;i++){
            cin >>a[i];
    }
    vector<i64>b(n);
    for(i64 i = 0;i < n;i++){
            cin >>b[i];
    }
    i64 res = 0;
    for(i64 i = 0;i < n;i++){
        res = add(res,pow(a[i],b[i]));
    }
    cout << res <<endl;
    return 0;
}
