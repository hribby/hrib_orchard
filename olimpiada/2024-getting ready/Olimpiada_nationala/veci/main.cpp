#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a;
    cin>>a;
    int p = a;
    vector<int>v;
    while(p>0){
        v.push_back(p%10);
        p/=10;
    }
    int res = 1e9;
    sort(v.begin(),v.end());
    do{
        int q = 0;
        for(int i = 0;i<v.size();i++){
            q*=10;
            q+=v[i];
        }
        if(q < res && q>a){
            res = q;
        }

    }while(next_permutation(v.begin(),v.end()));
    if(res != 1e9){
        cout<<res<<endl;
    }else{
       cout<<"0"<<endl;
    }
    return 0;
}
