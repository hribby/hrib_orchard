#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.size()/3;
    string s1;
    string s2;
    string s3;
     for(int i = 0;i<l;i++){
         s1.push_back(s[i]);
     }
     for(int i = l;i<l+l;i++){
         s2.push_back(s[i]);
     }
     for(int i = l+l;i<l*3;i++){
         s3.push_back(s[i]);
     }
     if(s2 == s1){
        cout<<s2<<endl;
     }else if(s1 == s3){
       cout<<s1<<endl;
     }else{
        cout<<s3<<endl;
     }
    return 0;
}
