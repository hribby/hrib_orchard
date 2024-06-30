/*
ID: anndree1
LANG: C++
TASK: barn1
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("barn1.in");
    ofstream cout("barn1.out");

    int m,s,c;
    cin>>m>>s>>c;
    vector<int>barn;
    for(int i = 0;i<c;i++){
        int a;
        cin>>a;
        barn.push_back(a);
    }
    if(m > c){
        cout<<c<<endl;
        return 0;
    }
    sort(barn.begin(),barn.end());
    vector<int>v;
    for(int i = 1;i<c;i++){
        v.push_back(barn[i]-barn[i-1] - 1);
    }
    sort(v.begin(),v.end());
    int res = s;
    int sz = v.size() - m +1;
    for(int i = sz;i<v.size();i++){
        res -= v[i];
    }

    int y = barn[0] - 1;
    res -= y;
    int x = max(s - barn[barn.size() - 1],0);
    res -= x;
    cout<<res<<endl;
    return 0;
}
