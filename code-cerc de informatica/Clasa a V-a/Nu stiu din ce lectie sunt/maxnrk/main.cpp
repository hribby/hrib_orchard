#include <iostream>
#include <fstream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    ifstream cin("maxnrk.in");
    ofstream cout("maxnrk.out");
    int n;
    cin>>n;

    int k;
    cin>>k;
    int nk=0;

    if(k==n){
        cout<<"nu"<<endl;
        cout<<n<<endl;
        return 0;
    }
    int x=k;
    while(x>0){
        nk++;
        x/=10;
    }

    if(n < 10){
      if(n < k){
        cout<<n-k<<endl;
        cout<<n<<endl;
        return 0;
      }else{
         cout<<"nu"<<endl;
         cout<<n<<endl;
         return 0;
      }
    }
     vector<int>v;
     x=n;
    while(x > 0){
        v.push_back(x%10);
        x/=10;
    }
    reverse(v.begin(),v.end());
    int mx=0;
    for(int i = 0; i < v.size() - nk; i++){
        int tmp = 0;
        for(int j = i; j < i + nk; j++){
            tmp = tmp * 10 + v[j];
            if(tmp > mx){
                mx = tmp;
            }
        }
    }
    if(mx < k){
        cout << k - mx << endl;
        cout << mx << endl;
        return 0;
    }else{
        cout << "nu" << endl;
        cout << mx << endl;
        return 0;
    }




}
