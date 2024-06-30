#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin("maxnr.in");
    //ofstream cout("maxnr.out");
    int n;
    cin>>n;
    int tmp=n;
    int m=0;

    vector<int>v;


    while(tmp!=0){
         v.push_back(tmp%10);
         tmp=tmp/10;

    }
    tmp=n;
    while(tmp!=0){
          for(int i=0;i<v.size();i++){

             if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
             }
             tmp/=10;

          }
    }
    for(int i=0;i<v.size();i++){
            m=m*10;
            m+=v[i];

    }






    cout<<m<<endl;
    return 0;
}
