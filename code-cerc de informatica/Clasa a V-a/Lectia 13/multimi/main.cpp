#include <bits/stdc++.h>

using namespace std;

int main()
{
//    ifstream cin("multimi.in");
//    ofstream cout("multimi.out");
    int n;
    cin>>n;

    int l;
    int r;
    cin>>l;
    cin>>r;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;

        int b;
        cin>>b;

        l = max(l,a);
        r =min (r,b);

    }
    for(int i=l;i<=r;i++){
     cout<<i<<" ";
    }
    if(r < l){
        cout<<"multimea vida"<<endl;
    }
    return 0;
}
