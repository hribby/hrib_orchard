#include <bits/stdc++.h>
#define enfl '/n'
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    long long k = 0;
    for(int i = 0;i<s.size();i++){
        k+= s[i];
    }

    k = k/s.size();
    cout<<char(k)<<endl;
    return 0;
}
