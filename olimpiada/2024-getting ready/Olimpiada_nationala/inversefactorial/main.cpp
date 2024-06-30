#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long m = 1000000009;
    long long u = 1e6;
    string a;
    cin>>a;
    long long res = 0;
    for(int i = 0;i<a.size();i++){
        int x = a[i] - '0';
        res = (res*10+x)%m;
        res%=m;
    }
    long long fr = 1;
    long long fnal = 0;
    for(int i = 1;i<u;i++){
        fr = (fr*(i % m)) % m;
        if(fr == res){
            fnal = i;
            break;
        }
    }
    cout<<fnal<<endl;
    return 0;
}
