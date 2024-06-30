#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long a;
    while(cin>>a){
        long long b = 1;
        long long res = 1;
        while(b%a !=0){
               b = (((b*10)%a)+1)%a;
               res++;
            }
           cout<<res<<endl;
        }

    return 0;
}
