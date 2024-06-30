/*
ID: anndree1
LANG: C++
TASK: milk
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("milk.in");
    ofstream cout("milk.out");
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>farm;
    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        farm.push_back(make_pair(a,b));
    }
    sort(farm.begin(),farm.end());
    int price = 0;
    for(auto e : farm){
        if(e.second < n){
           n -= e.second;
           price += e.second * e.first;
        }else{
           int c= e.second - n;
           e.second -= c;
           n -= e.second;
           price += e.second * e.first;
        }
    }
    cout<<price<<endl;

    return 0;
}
