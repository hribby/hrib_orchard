/*
ID: anndree1
LANG: C++
TASK: milk2
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("milk2.in");
    ofstream cout("milk2.out");
   int n;
   cin>>n;
   vector<long long>v(1000000,0);
   int x = 1e9;
   int y = -1;
   for(int i = 0;i<n;i++){
      int a,b;
      cin>>a>>b;
        x = min(a,x);
        y = max(b,y);
      for(int j = a;j<b;j++){
        v[j]=1;
      }
   }
   int res1 = 0;
   int res2 = 0;
   int yes = 0;
   int no = 0;
   for(int i = x;i<y;i++){
       if(v[i] == 0){
         no++;
         res1 = max(res1,yes);
         yes = 0;
       }else{
        yes++;
        res2 = max(res2,no);
        no = 0;
       }
   }
   res2 = max(res2,no);
   res1 = max(res1,yes);
   cout<<res1<<" "<<res2<<endl;

   return 0;
}
