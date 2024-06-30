
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ifstream cin("trafalet.in");
    ofstream cout("trafalet.out");
    int n,m;
    cin>>n>>m;
    long long a[n][m];
    long long b [n][m];
    int c = 1;
    for(int i = 0;i<n;i++){
          if(i%2 == 0){
                c = 1;
            }else{
              c = -1;
            }
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
            a[i][j]*=c;
            b[i][j] = a[i][j] *-1;
            c*=-1;

        }
    }
    long long pfs1[n+1][m+1];
    long long pfs2[n+1][m+1];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            pfs1[i][j] = 0;
            pfs2[i][j] = 0;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            pfs1[i][j] =pfs1[i-1][j] + pfs1[i][j-1]-pfs1[i-1][j-1] + a[i-1][j-1];
            pfs2[i][j] =pfs2[i-1][j] + pfs2[i][j-1]-pfs2[i-1][j-1] + b[i-1][j-1];
        }
    }
    long long res = 0;
    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            for(int k = 1;k<=n;k++){
               for(int l = 1;l<=m;l++){
                   long long subm1=pfs1[k][l] - pfs1[i-1][l] - pfs1[k][j-1] +pfs1[i-1][j-1];
                   long long subm2=pfs2[k][l] - pfs2[i-1][l] - pfs2[k][j-1] +pfs2[i-1][j-1];
                   long long x = max(subm1,subm2);
                   res= max(res,x);
               }
            }
        }
    }
       cout<<res<<endl;

    return 0;
}
