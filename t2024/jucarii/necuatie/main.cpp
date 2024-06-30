#include <bits/stdc++.h>

using namespace std;
long long  mod = 555557;
long long fct[555557 + 1];
long long ifct[555557 + 1];


long long pow(long long n, long long p) {
    if(p==0) {
        return 1;
    }
    if(p%2 ==0) {
        long long ans = pow(n,p/2);
        return (ans*ans)%mod;
    }
    long long ans = pow(n,(p-1)/2);
    return (((ans*ans)%mod)*n)%mod;

}

 long long ifact(long long n) {
    if(ifct[n] != 0) {
        return ifct[n];
    }
    return ifct[n] = pow(fct[n],mod-2);
}

long long comb(long long n,long long k) {
    if(n < k) {
        return 0;
    }

    return ((fct[n]*ifact(n-k))%mod)*ifact(k) % mod;
}
int main() {
    ifstream cin("necuatie.in");
    ofstream cout("necuatie.out");
    fct[0]=1;
    for(int i=1; i <555557 + 1; i++) {
        fct[i]= (i *fct[i-1]) % mod;
    }
    long long n;
    cin>>n;

    if(n == 1) {
        cout<<1<<endl;
        return 0;
    }
    long long res = 0;
    for(long long i = 0; i<=n/2; i++) {
        res += (comb(2*i,i) * comb(n,2*i)) % mod;
        res %= mod;
    }
    cout<<res<<endl;
    return 0;
}
