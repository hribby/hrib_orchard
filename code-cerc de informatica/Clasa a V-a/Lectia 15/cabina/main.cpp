#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream cin("cabina.in");
    ofstream cout("cabina.out");
    int n;
    cin>>n;

    int b=0;
    int nr=0;
    int o=0;
    int sp=0;

    int alt1=0;
    int alt2=0;
    for(int i=0; i<n; i++) {
        int a,p;
        cin>>a>>p;

        o+=p;
        if(i==0) {
            alt1=a;
        } else if(i==1) {
            alt2=a;
        } else {
            if((alt1>alt2&&alt2<a)||(alt1<alt2&&alt2>a)) {
                sp++;
            }
            alt1=alt2;
            alt2=a;
        }
        if(i>0) {
            if(alt1>alt2) {
                b+=1*(alt1-alt2);
            } else {
                b+=3*(alt2-alt1);
            }

        }
    }
    cout << o << endl;
    cout << b << endl;
    cout << sp << endl;
    return 0;
}
