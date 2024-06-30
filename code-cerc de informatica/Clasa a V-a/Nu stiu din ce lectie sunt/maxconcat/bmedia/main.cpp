#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;
vector<i64>pow10 = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
int main()
{
    i64 n;
    cin >> n;

    i64 t;
    if(n < 10){
            t = n;
    }else{
       t = 0;
       i64 i = 1;
       while(n >= pow10[i]){
            t += (pow10[i]-pow10[i-1])*i;
            i+=1;
       }
       t+=(n-pow10[i-1]+1)*i;
    }
    cout<<t<<endl;

    return 0;
}
