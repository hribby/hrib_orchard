#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    double pi = atan(1)*4;
    double h,u;
    cin>>h>>u;
    double r = u * pi/180;

    int l = h/sin(r);
    cout<<l +1<<endl;
    return 0;
}
