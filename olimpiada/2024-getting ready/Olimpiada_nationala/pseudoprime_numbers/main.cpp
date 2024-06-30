#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long mid(long long a,long long b,long long mod){
          long long res = 1;
          while(b >0){
              if(b % 2 != 0){
                 res = res*a%mod;
              }
               a=a*a%mod;
               b = b/2;
          }
          return res;
}
int main()
{
    long long p = -1;
    long long a = -1;
    while(true){
        cin>>p;
        cin>>a;
        bool okay = false;
       if(a == 0 && p == 0){
         break;
       }
       if(p % 2 == 0){
          okay = true;
       }else{
          for(int i = 3;i*i<p;i++){
              if(p %i == 0){
                 okay = true;
              }
          }

       }
        if(!okay){
            cout<<"no"<<endl;
            continue;
        }
        long long result = mid(a,p,p) % p;
        if(result == a){
            cout<<"yes"<<endl;
        }else{
           cout<<"no"<<endl;
        }

    }
    return 0;
}
