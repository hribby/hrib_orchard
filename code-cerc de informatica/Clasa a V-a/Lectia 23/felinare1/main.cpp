#include <iostream>
#include <fstream>
using namespace std;

typedef  int64_t i64;
typedef uint64_t u64;


int main() {

    ifstream cin("felinare1.in");
    ofstream  cout("felinare1.out");
    i64 n;
    cin>>n;
    i64 n2=n;

    i64 p;
    cin>>p;
    i64 p2=p;

    i64 cmmdc;
    if(p2==0) {
        cmmdc=n2;
    } else {
        while(p2!=0) {
            int tmp=p2;
            p2=n2%p2;
            n2=tmp;
        }
        cmmdc=n2;
    }
    i64 x = (n/cmmdc)*p;
    if((x/n)%2==1) {
        cout<<x/p<<endl;
    } else {
        cout<<"FARA SOLUTIE"<<endl;
    }
    return 0;
}
