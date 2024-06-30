#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
//long long mod(long long a,long long b,long long md) {
//    long long res = 1;
//    while(b > 0) {
//        if(b % 2 != 0) {
//            res = res * a % md;
//        }
//        a = a * a  % md;
//        b = b/2;
//    }
//    return res;
//}
int main() {
    long long c;
    cin>>c;
    for(int i = 0; i < c; i++) {
        long long a;
        cin>>a;
        long long res = 0;
        for(int j = 0; j < a; j++) {
            long long b;
            cin>>b;
            res += b % a;
            res %= a;
        }
        if(res % a == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
