#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool okay = true;
    bool good = false;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'a'){
            okay = false;
        }
        if(okay == false || s[i] == 'a'){
            cout<<s[i];
            good = true;
        }
        if(s[i]!='a' && good == false){
           okay = false;
        }
    }

    return 0;
}
