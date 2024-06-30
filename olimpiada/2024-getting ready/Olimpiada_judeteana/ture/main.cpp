#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   int n;
    cin>>n;
    vector <int>coloane;
    vector <int>randuri;
   map <int,int>mr;
   map<int,int>mc;
   map<int,int>xy;
    int bc = 0;
    int br = 0;
    int r;
    int c;
    for(int i = 0;i<n;i++){
        cin>>r;
        cin >>c;
        mr[r]++;
        mc[c]++;
        randuri.push_back(r);
        coloane.push_back(c);


    }
    int countx = 0;
    int county = 0;
    for(int i =0;i<n;i++){
        if(mr[randuri[i]]>br){
            br = randuri[i];
            countx=mr[randuri[i]];

        }
        if(mc[coloane[i]]>bc){
            bc = coloane[i];
            countx=mc[coloane[i]];
        }

    }
    int f = countx +county;

    cout<<br<<" "<<bc<<" "<<f+2*(n-f);


    return 0;
}
