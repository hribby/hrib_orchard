#include <iostream>
#include <fstream>


using namespace std;
typedef int64_t i64;
typedef int32_t i32;



int main() {

    std::ios::sync_with_stdio(false);
    ifstream cin("submultimi1.in");
    ofstream cout("submultimi1.out");

    i32 n=18;
    cin>>n;

    for(int i=1; i< (1<<n); i++) {
        bool fst = true;
        i32 p = 1;
        for(int j = 0; j<n; j++) {
            if( (i & p) !=0) {
                if(fst) {
                    cout<<j+1;
                } else {
                    cout<<" "<<j+1;
                }
                fst = false;
            }
            p = p<<1;
        }
        cout<<'\n';
    }
  return 0;

}


