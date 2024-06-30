#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double qaly = 0;
    long double a,b;
    int n;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>a>>b;
        qaly += a*b;
    }
    cout<<fixed<<setprecision(3)<<qaly<<endl;;
    return 0;
}
