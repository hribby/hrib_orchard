#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool okay = false;
    for(int i = 0;i<s.size();i++){
        if(okay){
           cout<<s[i];
        }else{
           if(s[i] == 'a'){
              cout<<s[i];
              okay = true;
           }
        }
    }
    return 0;
}
