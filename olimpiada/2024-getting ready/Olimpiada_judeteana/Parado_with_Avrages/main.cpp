#include <bits/stdc++.h>
#define endl '\n'


using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>results;

    for(int j = 0;j<n;j++){
    int ncs;
    cin>>ncs;
    vector<int>cs;
    double sum_cs = 0;

    int ne;
    cin>>ne;
    double sum_e = 0;

    int x;
    for(int i = 0; i<ncs; i++) {
       cin>>x;
       cs.push_back(x);
       sum_cs+=x;
    }
    double sum1 = sum_cs /ncs;

    for(int i = 0; i<ne; i++) {
       cin>>x;
       sum_e+=x;
    }
    double sum2 = sum_e/ne;
    int nos=0;
    for(int i = 0;i<ncs;i++){
        double s1 = (sum_cs-cs[i])/(ncs-1);
        double s2 = (sum_e+cs[i])/(ne+1);
        if(s1>sum1 && s2>sum2){
            nos++;
        }
    }
    results.push_back(nos);
    }
    for(int i = 0;i<n;i++){
        cout<<results[i]<<endl;
    }
    return 0;
}
