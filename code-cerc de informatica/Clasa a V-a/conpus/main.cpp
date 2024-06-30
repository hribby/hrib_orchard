#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;

int main() {

    ifstream cin("compus.in");
    ofstream cout("compus.out");
    i64 n;
    cin >> n;

    i64 e;
    cin >> e;

    i64 p;
    cin >> p;

    vector<i64>v;
    bool yes_e = false;

    for(int i = 0; i < n; i ++) {
        int a;
        cin >> a;
        if(a == e && yes_e != true ) {
            yes_e = true;

        } else {
            v.push_back(a);

        }
    }
    vector<i64>x(n);
    for(int i = 0; i < p; i ++){
        x[i] = v[i];
    }
    x[p] = e;

    for(int i = p + 1; i <= n - 1; i++){
        x[i] = v[i - 1];
    }
    reverse(x.begin(), x.end());

    int y = x[0];
    for(int i = 0; i < n - 1; i++){
        x[i] = x[i + 1];
    }
    x[n - 1] = y;

    for(int i = 0; i < n; i++){
        cout << x[i] << " ";
    }

    return 0;
}


//7
//6
//3
//3 6 3 5 9 6 7
