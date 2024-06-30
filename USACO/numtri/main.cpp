/*
ID: anndree1
LANG: C++
TASK: numtri
*/
#include <bits/stdc++.h>

using namespace std;
int p[1000][1000];
int main()
{
    ifstream cin("numtri.in");
    ofstream cout("numtri.out");
    int n,e;
    cin >> n;
    int mxsum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cin>>e;
            if(i == 0){
              p[i][j] = e;
            }else p[i][j] = (j==0) ? p[i-1][j]+e : max(p[i-1][j],p[i-1][j-1])+e;
           mxsum = max(p[i][j],mxsum);
        }
    }
    cout<<mxsum<<endl;
    return 0;
}
