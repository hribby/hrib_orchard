#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64 ;
typedef uint64_t u64 ;



int main() {
    ifstream cin("magic1.in");
    ofstream cout("magic1.out");
    const auto delta = 'a'-'A';
    i64 n;
    cin >> n;
    vector<int>v(10);
    for(int i = 0; i < n; i ++) {
        char a;
        cin >> a;
        if(a>='a' && a<='z') {
            cout << char(a-delta);
        } else {
            int tmp = a-'0';
            v[tmp]+=1;
        }
    }
    cout<<" "<<endl;

    bool hasZero = v[0] >0;
    for(int j=1; j<10; j++) {
        if(v[j]>=1) {
            cout<<j;
            if(hasZero) {
                cout<<0;
                hasZero = false;
            }
        }
    }
//    if(hasZero) {
//        cout<<0;
//    }
    return 0;
}
