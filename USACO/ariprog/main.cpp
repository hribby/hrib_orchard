/*
ID: anndree1
LANG: C++
TASK: ariprog
*/
#include <bits/stdc++.h>

using namespace std;



int main() {
    //ifstream cin("ariprog.in");
    //ofstream cout("ariprog.out");

    int m,n;
    cin>>n>>m;
    vector<bool>ap((m*m*2)+1,false);
    vector<pair<int,int>>artp;

    for(long long  i = 0; i<=m; i++) {
        for(long long j = 0; j<=m; j++) {
            ap[(i*i) + (j*j)] = true;
        }
    }

    int rat = (m*m*2)/(n-1);
    for(int i = 0; i <= m*m*2; i++) {
        if(ap[i]) {
            int r = 0;
            for(int j = i+1 ; j <= m*m*2; j++) {
                if(j-i > rat){ break;}
                if(ap[j]) {
                    int r = (j - i);
                    int p = 2;
                    for(int k = j+r; k <= m*m*2; k+=r) {
                        if(!ap[k]) {break;}
                        p++;
                        if(p == n) {
                            artp.push_back({r,i});
                            break;
                        }
                    }
                }
            }
        }
    }
    if(artp.empty()){
       cout<<"NONE"<<endl;
       return 0;
    }
    sort(artp.begin(),artp.end());
    for(auto e:artp) {
        cout<<e.second<<" "<<e.first<<endl;
    }
    return 0;
}
