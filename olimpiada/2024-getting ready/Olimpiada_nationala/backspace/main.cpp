#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    deque<char>d;
    char a;
    while(cin>>a){
        if(a != '<'){
           d.push_back(a);
        }else{
           d.pop_back();
        }
    }
    for(int i = 0;i<d.size();i++){
        cout<<d[i];
    }
    return 0;
}
