/*
ID: anndree1
LANG: C++
TASK: sprime
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<ll>res;
int k;
bool isprime(ll n){
   if(n < 9){
     return true;
   }
   for(int i = 3;i*i < n;i+=2){
       if(n % i == 0)return false;
   }
   return isprime(n/10);
}
void create(ll e, int n){
   if(n == 0){
      if(isprime(e)){res.push_back(e);}
      return ;

   }
   for(int i = 1;i<=9;i+=2){
    if(n == k-1){
        if(i == e)continue;
    }
    if(i == 5)continue;
      e *= 10;
      e += i;
      create(e,n-1);
      e /= 10;
   }
}
int main()
{
    ifstream cin("sprime.in");
    ofstream cout("sprime.out");

    cin>>k;
    vector<int>v ={2,3,5,7};
    for(auto e:v){
        create(e,k-1);
    }
    for(auto e:res){
        cout<<e<<endl;
    }
    return 0;
}
