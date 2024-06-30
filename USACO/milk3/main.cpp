/*
ID: anndree1
LANG: C++
TASK: milk3
*/
#include <bits/stdc++.h>

using namespace std;
map<vector<int>,int>seen;
vector<int>v;
vector<int>sol;
pair<int,int>change(int a,int b,int pb){
    while (a > 0 && b < v[pb]) { a--, b++; }
    return {a,b};

}
int trip(int a, int b, int c){
    vector<int>seeen = {a,b,c};
    if(seen[seeen] == 1){
       return 0;
    }
    seen[seeen] = 1;
    if(a == 0){
        sol.push_back(c);
    }
    int a1 = a;
    int a2 = b;
    int a3 = c;

    pair<int,int>rr = change(a,b,1); trip(rr.first,rr.second,c);
    rr = change(a,c,2); trip(rr.first,b,rr.second);
    rr = change(b,a,0); trip(rr.second,rr.first,c);
    rr = change(b,c,2); trip(a,rr.first,rr.second);
    rr = change(c,b,1); trip(a,rr.second,rr.first);
    rr = change(c,a,0); trip(rr.second,b,rr.first);
     return 0;

}

int main()
{
    ifstream cin("milk3.in");
    ofstream cout("milk3.out");
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    trip(0,0,c);
    sort(sol.begin(),sol.end());

    for(int i = 0;i<sol.size();i++){
        cout<<sol[i];
        if(i != sol.size() -1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
