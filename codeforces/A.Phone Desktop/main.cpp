#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int tp = y / 2 + y % 2;
        int pxs = (y/2)*7 + (y%2)*11;
        if((x-pxs) <= 0){
            cout<<tp<<endl;
        }else{
           int op = ((x-pxs) / 15)+min((x-pxs)%15, 1);
           cout<<op+tp<<endl;
        }
    }
    return 0;
}
