#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream cin("case.in");
    ofstream cout("case.out");

    int n;
    cin >> n;

    int c=0;
    int b=0;
    int f=0;
    int gr1=0;
    int gr2=0;
    int gr3=0;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        c += a % 10;
        f += a % 100 / 10;
        b += a % 1000 / 100;
        if(a / 1000 == 1) {
            gr1++;
        }
        if(a / 1000 == 2) {
            gr2++;
        }
        if(a / 1000 == 3) {
            gr3++;
        }
    }
    cout << gr1 << endl;
    cout << gr2 << endl;
    cout << gr3 << endl;
    cout << b << endl;
    cout << f << endl;
    cout << c << endl;
    return 0;
}
