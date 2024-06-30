/*
ID: anndree1
LANG: C++
TASK: pprime
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<ll>pp;
ll a,b;
void isprime(ll num) {
    if(num % 2 == 0) return;
    for(int i = 3; i*i<=num; i+=2) {
        if(num % i == 0)return;
    }
    if(num >= a && num <= b)pp.push_back(num);

}
ll next_pal(ll num) {
    vector<int>pal;
    while(num > 0) {
        pal.push_back(num%10);
        num/=10;
    }
    int s = 0;
    int d = 0;
    if(pal.size()%2 == 0) {
        s = pal.size()/2 - 1;
        d = s+1;

    } else {
        s = pal.size()/2;
        d = s;
    }
    if(pal[s] < 9) {
        if(d == s) {
            pal[s]++;
        } else {
            pal[s]++;
            pal[d]++;
        }
    } else {
        int k = 1;
        pal[s] = 0;
        pal[d] = 0;
        s --;
        d++;
        while(s >= 0) {
            if(pal[s] == 9 && k != 0) {
                k = 1;
                pal[s] = 0;
                pal[d] = 0;
            } else {
                if(k == 0)break;
                pal[s]+= k;
                pal[d]+= k;
                k = 0;
            }
            s--;
            d++;
        }
    }
    ll x = pal.size();
    x--;
    ll res = 0;
    if(pal[0] == 0) {
        pal.push_back(1);
        res = 1;
    } else if(pal[0] % 2 == 0) {
        pal[0]++;
        pal[x]++;
    }else if(pal[0] == 5){
        pal[0]+=2;
        pal[x]+=2;
    }
    for(auto e:pal) {
        res+=e;
        res*=10;
    }
    res/=10;
    isprime(res);
    return res;
}

int main() {
    ifstream cin("pprime.in");
    ofstream cout("pprime.out");
    cin>>a>>b;
    ll num = 0;
    if(5>=a && 5 <=b) {
        pp.push_back(5);
        num = 5;
    }
    if(7>=a && 7 <=b) {
        pp.push_back(7);
        num = 7;
    }
    if(11>= a && 11<= b) {
        pp.push_back(11);
        num = 11;
    }
    if(num == 0) {
        int a1 = a;
        int n = 0;
        while(a1 > 0) {
            a1/= 10;
            n++;
        }
        num = 1;
        for(int i = 1;i<n;i++){
            num*=10;
        }
        num+=1;
    }

    while(num <= b) {
        num = next_pal(num);
    }
    for(auto e:pp) {
        cout<<e<<endl;
    }
    return 0;
}
