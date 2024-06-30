#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    long double a,b;
    cin>>a>>b;
    long double res = a*b;
    while(true){
        if(ceil(res/a) >= b){
            res--;
        }else{
           res++;
           cout<<res<<endl;
           break;
        }
    }
    return 0;
}
