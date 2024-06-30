#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    vector<int>v(6);
    for(int i = 0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int h1,h2;
    cin>>h1>>h2;
    do{
        if(v[0]>v[1] && v[1]>v[2] && v[0]+v[1]+v[2] == h1){
          if(v[3]>v[4] && v[4]>v[5] && v[3]+v[4]+v[5] == h2){
            break;
        }
        }

    }while(next_permutation(v.begin(),v.end()));
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
