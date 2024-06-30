#include <iostream>
#include <fstream>

using namespace std;
int is_prime(int n) {
    bool p = true;
    for(int i = 2; i * i <= n; i++) {
        if(n%i==0) {
            p=false;
            break;
        }
    }
    return p;

}

int main() {

    ifstream cin("test.in");
    ofstream cout("test.out");
    int a;
    cin >> a;

    int b;
    cin >> b;

    int mxp = 0;
    int mx = 0;
    if(is_prime(a) == true) {
        mxp = a;

    } else {
        mx = a;
    }
    if(is_prime(b) == true) {
        if(mxp < b) {
            mxp = b;
        }

    } else {
        if(mx < b) {
            mx = b;
        }
    }
    int bb = b;
    int s = 1;
    while(b != 0) {
        s *= 10;
        b /= 10;
    }
    s /= 10;
    b = bb % s;
    int b2 = bb / 10;
    while(a != 0) {
        int x = a % 10;
        int n1 = x * s + b;
        int n2 = b2 * 10 + x;
        if(is_prime(n1) == true) {
            if(n1 > mxp) {
                mxp = n1;
            }

        } else {
            if(n1 > mx) {
                mx = n1;
            }
        }
        if(is_prime(n2) == true) {
            if(n2 > mxp) {
                mxp = n2;
            }

        } else {
            if(n2 > mx) {
                mx = n2;
            }
        }
            a /= 10;

        }

        if(mxp != 0) {
            cout << mxp << endl;
        } else {
            cout << mx << endl;
        }


        return 0;
    }
