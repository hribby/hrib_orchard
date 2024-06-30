#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    string s;
    cin>>s;
    int lc = 0;
    char l = '0';
    for(int i = 0;i<s.size();i++){
        if(l != s[i]){
           cout<<s[i];
           }
           l = s[i];
        }
    return 0;
}
