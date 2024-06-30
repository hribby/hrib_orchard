#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<long long>f(2000001,-1);
    for(int i = 2;i<2000001;i++){
        if(f[i] == -1){
            for(int j = i*2;j<2000001;j+=i){
                if(f[j] == -1){
                   f[j] = 0;
                }
            }
        }else{
            for(int j = i;j<2000001;j+=i){
                if(f[j] == -1){
                   f[j] ++;
                }
                f[j] ++;
            }
        }
    }
    long long q;
    cin>>q;
    long long a;
    for(int i = 0;i<q;i++){
        cin>>a;
        if(f[a] == -1){
            cout<<1<<endl;
        }else{
            cout<<f[a] + 1<<endl;
        }
    }
    return 0;
}
