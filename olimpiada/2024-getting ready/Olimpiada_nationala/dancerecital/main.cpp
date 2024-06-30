#include<bits/stdc++.h>
#define endl '\n'

typedef uint64_t u8;
using namespace std;

int main() {
    int c;
    cin>>c;
    vector<u8>v(c);
    string tmp;
    for(int i = 0; i<c; i++) {
        cin>>tmp;
        bitset<64>b;
        for(auto e:tmp){
            b.set(e-'A');
        }
        v[i] = b.to_ulong();
    }

    sort(v.begin(),v.end());
    int res = 1e9;
    do {
        int q = 0;
        for(int i=0; i<c-1; i++) {
            auto p = v[i] &v[i+1];
            bitset <64>b(p);
            q+=b.count();
        }

        res = min(res,q);

    } while(next_permutation(v.begin(),v.end()));
    cout<<res<<endl;
    return 0;
}
