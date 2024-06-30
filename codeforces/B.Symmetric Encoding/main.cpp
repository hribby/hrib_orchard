#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        int n;
        cin>>n;
        string b;
        cin>>b;
        string r;
        map<char,int>ct;
        for(auto e:b){
            if(ct[e] == 0){
                r.push_back(e);
            }
            ct[e]++;
        }
        map<char,char>m;
        int s = r.size();
        int k = s - 1;
        s/=2;
        sort(r.begin(),r.end());
        for(int i = 0;i<=s;i++){
            m[r[i]] = r[k];
            m[r[k]] = r[i];
            k--;
        }
        for(auto e : b){
            cout<<m[e];
        }
        cout<<endl;


    }
    return 0;
}
