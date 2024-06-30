#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
    ifstream cin("panglica.in");
    ofstream cout("panglica.out");

    i64 n;
    cin>>n;

    i64 c;
    cin>>c;
    vector<int>v;
    for(int i = 0; i < n;i ++) {
        i64 a;
        cin>>a;
        v.push_back(a);
    }
    map<i64,i64> m;
    for(int i = n - 1;i >= 0;i --){
        if(m.count(v[i]) == 0){
                m[v[i]] = n - i - 1;

        }
    }
    int res = n * 2;
    int l = 0;
    int r = 0;
    int w = 0;
    for(int i = 0;i < n;i ++){
            if(res > i + m[v[i]]){
            res = i + m[v[i]];
            l = i;
            r = m[v[i]];
            w = v[i];

            }

    }

    cout << n - (l + r) <<endl;
    cout << w <<endl;
    cout << l <<endl;
    cout << r <<endl;


    return 0;
}
