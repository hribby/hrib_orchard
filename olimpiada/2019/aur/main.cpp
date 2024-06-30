#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;



i64 c1(vector<i64> &v) {
    i64 cf = 0;
    for(i64 i = 0; i < v.size(); i++) {
        i64 x = v[i];
        while(x != 0) {
            x /= 10;
            cf++;
        }
    }
    return cf;
}

i64 c2(int k, vector<i64> &v) {
    i64 cf = 0;
    for(i64 i = 0; i < v.size(); i++) {
        i64 x = v[i];
        deque<i64> blah;
        while(x != 0) {
            blah.push_front(x % 10);
            x /= 10;
        }
        for(i64 j=0;j<blah.size();j++){
            cf++;
            if(cf ==k){
                return blah[j];
            }
        }

    }
}

i64 c3(int p, vector<i64> &v) {
    vector<i64> nr;
    for(i64 i = 0; i < v.size(); i++) {
        i64 r = v[i];
        deque<i64> blah;
        while(r != 0) {
            blah.push_front(r % 10);
            r /= 10;
        }
        for(auto e: blah){
            nr.push_back(e);
        }
    }
    i64 x =0;
    i64 pw = 1;
    for(i64 i=0; i<p; i++) {
        x=x*10+nr[i];
        pw *=10;
    }
    pw/=10;
    i64 res = x;
    for(i64 i=p; i<nr.size(); i++) {
        x %=pw;
        x=x*10+nr[i];
        res = max(res,x);
    }
   return res;

}

int main() {
ifstream cin {"aur.in"};
ofstream cout {"aur.out"};

    i64 c;
    cin >> c;

    i64 n;
    cin >> n;

    i64 k;

    vector<i64>v(n);

    if(c == 2 || c == 3) {
        cin >> k;
    }

    for(i64 qq = 0; qq < n; qq++) {
        cin >> v[qq];
    }

    if(c==1) {
        cout<<c1(v)<<endl;
    } else if(c == 2) {
        cout<<c2(k,v)<<endl;
    } else {
        cout<<c3(k,v)<<endl;
    }
    return 0;
}
