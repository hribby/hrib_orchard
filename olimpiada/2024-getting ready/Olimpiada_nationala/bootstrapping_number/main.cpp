#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    cout<<fixed<<setprecision(7);
    long long n;
    cin>>n;
    long double l = 0;
    long double r = n;
    while(true){
        long double mid = l +(r-l)/2;
        long double res = pow(mid,mid);
        if(abs(res - n) < 1e-7){
          cout<<mid<<endl;
          break;
        }
        if(res < n){
           l = mid;
        }else{
           r = mid;
        }

    }
    return 0;
}
