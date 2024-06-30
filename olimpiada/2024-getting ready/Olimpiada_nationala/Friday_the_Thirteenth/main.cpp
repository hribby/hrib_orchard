/*
ID: anndree1
LANG: C++
TASK: friday
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("friday.in");
    ofstream cout("friday.out");
    int n;
    cin>>n;
    int d = 0;
    vector<int>v(12,31);
    v[8] = 30;
    v[3] = 30;
    v[5] = 30;
    v[10] = 30;
    v[1] = 28;
    vector<int>day(7,0);
    int fnal = 1900+n;
    for(int i = 1900;i<fnal;i++){
        if(i % 100 != 0 && i % 4 == 0){
            v[1]++;
        }else if(i % 100 == 0 && i % 400 == 0){
           v[1]++;
        }
        for(int j = 0;j<12;j++){
            int x = 5 + d;
            x %= 7;
            day[x]++;
            int temp = d;
            d += v[j];
            d %= 7;
        }
        v[1] = 28;
    }
    cout<<day[5]<<" ";
    cout<<day[6]<<" ";
    for(int i = 0;i<5;i++){
        cout<<day[i];
        if(i != 4){
            cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}
