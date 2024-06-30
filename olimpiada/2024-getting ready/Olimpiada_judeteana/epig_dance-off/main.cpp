#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<string>d;
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        d.push_back(s);
    }
    int ct = 0;
    int nos = 0;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(d[j][i] == '_'){
               ct++;
            }
        }
        if(ct == n){
            nos++;
        }
        ct = 0;
    }
    cout<<nos + 1<<endl;
    return 0;
}
