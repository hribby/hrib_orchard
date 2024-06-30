#include <bits/stdc++.h>

using namespace std;
long long  mod = 666013;
long long fct[1001];
long long ifct[1001];


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
int main() {
    ifstream cin("mygo.in");
    ofstream cout("mygo.out");
    vector<int>a(10);
    long long s = 0;

    for(int i = 0; i<10; i++) {
        cin>>a[i];
        s += a[i];
    }
    if(s == 0){
        cout<<0<<endl;
        return 0;
    }
    if(s == 1){
        cout<<1<<endl;
        return 0;
    }
    fct[0]=1;
    for(int i=1; i<=s; i++) {
        fct[i]= (i *fct[i-1]) % mod;
    }
    long long want = 1;
    for(auto e:a) {
        want *= ifact(e);
        want %= mod;
    }
    want *= fct[s];
    want %= mod;

    long long nooo = ifact(a[0] - 1);
    for(int i = 1; i<10; i++) {
        nooo *= ifact(a[i]);
        nooo %= mod;
    }
    nooo *= fct[s-1];
    nooo %= mod;
    cout<<(want - nooo + mod) % mod<<endl;
    return 0;
}
