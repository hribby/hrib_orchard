#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >>x;
    int n;
    vector <int>a;
    vector <int>b;
     bool okay = true;
    vector <int>c;
    cin>>n;
    a.push_back(n);
    c.push_back(n);
    for(int i =1; i<x; i++) {
        cin>>n;
        a.push_back(n);
        int p;
        p = max(c[i-1],n);
        c.push_back(p);

    }

    for(int j =0; j<x; j++) {
        cin>>n;
        b.push_back(n);
        if(n<c[j]){
            okay = false;
        }
    }
    if(okay == false){
       cout<<"-1";
    }else{
       for(int i = 0;i<x;i++){
           cout<<c[i]<<" ";
       }

    }
    return 0;
}
