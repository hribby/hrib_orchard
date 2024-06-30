#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;

void small(istream& cin, ostream& cout,  i64 n) {
    int r = 0;
    int zero = 0;
    n = n - 1;
    int nines = n / 9;
    r = n % 9;
    zero = n - nines;

    if(r != 0) {
        zero--;
    }
    cout << 1 ;
    for(int i = 0; i < zero; i++) {
        cout << 0;
    }
    if(r != 0) {
        cout << r;
    }
    for(int i = 0; i < nines; i++) {
        cout << 9;
    }
   cout<<endl;

}
void big(istream& cin, ostream& cout, i64 n) {
    i64 r = n % 9;
    i64 nines = n / 9;
    i64 zero = n - nines;
    if(r != 0) {
        zero--;
    }
    for(int i = 0; i < nines; i ++) {
        cout << 9;
    }
    if(r != 0) {
        cout << r;
    }
    for(int i = 0; i < zero; i ++) {
        cout << 0;
    }
    cout<<endl;
}

int main() {
    ifstream cin("suma.in");
    ofstream cout("suma.out");


    i64 n;
    cin >> n;

    small(cin, cout,n);
    big(cin, cout,n);
    return 0;
}
