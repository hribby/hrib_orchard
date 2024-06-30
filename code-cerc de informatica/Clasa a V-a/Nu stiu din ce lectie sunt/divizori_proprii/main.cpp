#include <iostream>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;


i64 prop_div(u64 t) {
    u64 r =0;

    for(u64 i = 2; i*i<=t; i++) {
        if(t%i==0) {
            r=t/i;
            break;

        }
    }
    return r;
}

i64 div_count(u64 n) {
    u64 c =0;

    for(u64 i = 2; i*i<=n; i++) {
        if(n%i==0) {
            if(i==n/i){
                c+=1;
            }else{
                c+=2;
            }
        }
    }
    return c;
}

int main() {
    u64 n;
    cin>>n;
    cout <<prop_div(n)<<endl;
    cout <<div_count(n)<<endl;
    cout <<div_count(2346)<<endl;
    return 0;
}
