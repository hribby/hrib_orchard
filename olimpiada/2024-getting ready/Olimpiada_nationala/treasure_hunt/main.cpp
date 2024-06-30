#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,c;
    cin>>r>>c;
    char a [r][c];
    for(int i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            cin>>a[i][j];
        }
    }
    pair<int,int>poz= {0,0};
    int mvs = 0;
    while(mvs < r*c) {

        if(a[poz.first][poz.second] == 'T') {
            cout<<mvs<<endl;
            return 0;
        }
        if(a[poz.first][poz.second] == 'N') {
            poz.first--;
        } else if(a[poz.first][poz.second] == 'E') {
            poz.second++;
        } else if(a[poz.first][poz.second] == 'S') {
            poz.first++;
        } else if(a[poz.first][poz.second] == 'W') {
            poz.second --;
        }
        if(poz.first <0 || poz.second<0 || poz.first >=r || poz.second>=c) {
            cout<<"Out"<<endl;
            return 0;
        }
        mvs++;

    }
    cout<<"Lost"<<endl;
    return 0;
}
