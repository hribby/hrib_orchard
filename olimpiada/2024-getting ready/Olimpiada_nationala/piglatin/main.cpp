#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    while(cin>>a){
        if(a[0] == 'a' || a[0] == 'e'|| a[0] == 'i'|| a[0] == 'o' || a[0] == 'u' || a[0] == 'y'){
            cout<<a<<"yay ";
        }else{
            int i = 0;
           while(a[i] != 'a' && a[i] != 'e'&& a[i] != 'i'&& a[i] != 'o' && a[i] != 'u' && a[i] != 'y'){
                i++;
           }
           for(int j = i;j<a.size();j++){
              cout<<a[j];
           }
           for(int j = 0;j<i;j++){
              cout<<a[j];
           }
           cout<<"ay ";
        }
    }
    return 0;
}
