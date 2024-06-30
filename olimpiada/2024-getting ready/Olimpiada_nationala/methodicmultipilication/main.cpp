#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    if(y == "0" || x == "0"){
      cout<<"0"<<endl;
    }else{
       int s1 = 0;
       for(int i = 0;i<y.size();i++){
          if(y[i] == 'S'){
             s1++;
          }
          if(y[i] == '0'){
             break;
          }
       }
       int s2 = 0;
       for(int i = 0;i<x.size();i++){
          if(x[i] == 'S'){
             s2++;
          }
          if(x[i] == '0'){
             break;
          }
       }
       int fnal_s = (s2*s1);
       int i = 0;
       int p = fnal_s;
       while(fnal_s > 0){
             if(i == 0){
                cout<<"S";
                i = 1;
                fnal_s--;
             }else{
                i = 0;
                cout<<"(";
             }
       }
       cout<<"(0";
       while(p > 0){
             cout<<")";
             p--;
       }


    }
    return 0;
}
