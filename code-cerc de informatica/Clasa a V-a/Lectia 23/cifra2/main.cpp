#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream cin("cifra2.in");
    ofstream cout("cifra2.out");
    long n;
    cin >> n;
    long n2 = n;
    bool pn=true;

    while(n2 > 9) {
        int mn = 10;
        int n3 = n2;
        while(n2!=0) {
            int tmp = n2 % 10;
            mn = min(tmp,mn);
            n2 /= 10;
        }
        if(pn) {
            cout<<mn<<endl;
        }

        n2=0;
        int y = 1;
        while(n3 != 0) {
            int tmp = n3 % 10;
            if(tmp != mn) {
                n2 = (tmp-mn) * y + n2;
                y*=10;
            }
            n3/=10;
        }
        if(pn) {
            cout<<n2<<endl;
        }
        pn=false;

    }
    cout<<n2<<endl;


    return 0;
}




