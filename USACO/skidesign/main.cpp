/*
ID: anndree1
LANG: C++
TASK: skidesign
*/
#include <bits/stdc++.h>

using namespace std;
int main() {
    ifstream cin("skidesign.in");
    ofstream cout("skidesign.out");
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>costs;
    int i = 0;
    int cst = 0;
    while(v[n-1] > 0) {
        if(v[n-1] - 17 <= 0) {
            int k = n - 2;
            while(v[k] > v[n-1]) {
                int m = v[k] - v[n-1];
                cst += m*m;
                k--;
            }
         cst+=i*i;
            costs.push_back(cst);
            v[n-1]--;
            i++;
            continue;
        }
        int p = v[n-1]-17;
        int j = 0;
        while(v[j] < p) {
            int m = p - v[j];
            cst += m*m;
            j++;
        }
        int k = n - 2;
        while(v[k] > v[n-1]) {
            int m = v[k] - v[n-1];
            cst += m*m;
            k--;
        }
        cst += i*i;
        costs.push_back(cst);
        v[n-1]--;
        i++;
        cst = 0;
    }
    sort(costs.begin(),costs.end());
    cout<<costs[0]<<endl;
    return 0;
}
