#include <bits/stdc++.h>

using namespace std;
long long mod = 998244353;

long long fct[3*100000+1];
long long ifct[3*100000+1];


long long bpow(long long n, long long p) {
    if(p==0) {
        return 1;
    }
    if(p%2 ==0) {
        long long ans = bpow(n,p/2);
        return (ans*ans)%mod;
    }
    long long ans = bpow(n,(p-1)/2);
    return (((ans*ans)%mod)*n)%mod;

}

inline long long ifact(long long n) {
    if(ifct[n] != 0) {
        return ifct[n];
    }
    return ifct[n] = bpow(fct[n],mod-2);
}




long long comb(long long n,long long k) {
    if(n < k) {
        return 0;
    }

    return ((fct[n]*ifact(n-k))%mod)*ifact(k) % mod;
}
int  main() {
    long long n,k;
    cin>>n>>k;
    fct[0]=1;
    for(int i=1; i<n+1; i++) {
        fct[i]= (i *fct[i-1]) % mod;
    }
    vector<long long>open(n);
    vector<long long>close(n);
    for(long long i = 0; i<n; i++) {
        cin>>open[i]>>close[i];
    }
    sort(open.begin(),open.end());
    sort(close.begin(),close.end());

    long long no = 0;
    long long op = 0;
    long long cl = 0;
    long long res = 0;
    while(op < n) {
        if(open[op] <= close[cl]) {
            op++;
            no++;
            if(no >= k) {
                res += (comb(no,k) - comb(no - 1,k) + mod)%mod;
                res %= mod;
            }
        } else {
            cl++;
            no--;
        }

    }
    cout<<res<<endl;
    return 0;
}
