#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;

i64 a(i64 k,i64 x) {
    i64 pos =-1;
    deque<i64>v;
    for(i64 i = 1; i <= k; i++) {
        v.push_back(i);
        if(i == x) {
            pos = i;
            break;
        }
    }
    int cum = 0;
    while(pos ==-1) {
        for(i64 j = 0; j < k; j++) {
            v[j] = v[j]+k;
        }
        i64 ft = v.front();
        v.pop_front();
        v.push_back(ft);
        cum+=k;
        for(i64 j = 0; j < k; j++) {
            if(v[j] == x) {
                pos = j+cum;
                break;
            }
        }
    }
    return pos + 1;
}
i64 b(i64 k, i64 l) {

    deque<i64>v;
    for(i64 i = 1; i <= k; i++) {
        v.push_back(i);
    }
    while(l > k) {
        for(i64 j = 0; j < k; j++) {
            v[j] = v[j]+k;
        }
        i64 ft = v.front();
        v.pop_front();
        v.push_back(ft);
        l-=k;
    }
    return v[l];
}




i64 c(i64 k, i64 m, i64 n) {
    return a(k,n) - a(k,m) + 1;
}
int main() {
    ifstream cin("numere5.in");
    ofstream cout("numere5.out");

    i64 k;
    cin >> k;

    i64 x;
    cin >> x;

    i64 l;
    cin >> l;

    i64 m;
    cin >> m;

    i64 n;
    cin >> n;

    cout << a(k,x) <<endl;
    cout << b(k,l-1) <<endl;
    cout << c(k,min(m,n),max(m,n)) <<endl;


    return 0;
}
