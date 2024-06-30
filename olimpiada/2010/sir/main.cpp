#include<bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;

int  main() {
    ifstream cin{"sir.in"};
    ofstream cout{"sir.out"};
    i64 k;
    cin >> k;
    i64 x;
    cin >> x;
    i64 a;
    cin >> a;
    i64 b;
    cin >> b;
    i64 nr2 = 12;
    i64 sum = 1;
    i64 cifra = 3;
    i64 impartire = 10;

    for(i64 i = 1; i < k; i++) {
        i64 y = nr2;
        for(i64  j = 0; j < nr2 % 10; j++) {
            i64 h = y / impartire;
            y = y % impartire;
            y *= 10;
            y += h;
            sum += y%10;
            sum = sum % 10;
        }

        nr2 *= 10;
        nr2 += cifra;
        cifra += 1;
        impartire *= 10;
    }
    i64 xx = x;
    i64 nrx = 0;
    i64 imi = 1;
    while(xx != 0) {
        xx /= 10;
        nrx++;
        imi *= 10;
    }
    imi /= 10;
    if(x / imi == nrx) {
        int h = nrx;
        nrx += 1;
        x %= imi;
        x *= 10;
        x += h;
        x *= 10;
        x += nrx;
    } else {
        i64 h = x / imi;
        x = x % imi;
        x *= 10;
        x += h;
    }


    cout << sum << endl;
    cout << x << endl;
    cout << max((i64)0,b - a)<< endl;


    return 0;
}
