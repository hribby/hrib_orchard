#include <bits/stdc++.h>

using namespace std;
long long mid(long long a,long long b,long long mod) {
    long long res = 1;
    while(b >0) {
        if(b % 2 != 0) {
            res = (res*a)%mod;
        }
        a=(a*a)%mod;
        b = b/2;
    }
    return res;
}
int main() {
//works only with special math formula....it gives TLE otherwise
    long long a;
    cin>>a;
    long long b;
    cin>>b;
    long long res = 0;
    for(long long  i = 1; i<a; i++) {
        res = (res +mid(i,b,a))%a;
    }
    cout<<res<<endl;
    return 0;
}
