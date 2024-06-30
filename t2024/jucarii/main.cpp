#include <iostream>

using namespace std;
long long  mod = 224737;
int main()
{
    int k,n;
    cin>>k>>n;
     int res =1;
     for(int i = n - k +1;i<=n;i++){
        res *= i % mod;
        res %= mod;
     }
     cout<<res<<endl;
    return 0;
}
