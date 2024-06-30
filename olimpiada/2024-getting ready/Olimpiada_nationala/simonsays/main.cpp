#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    long long a;
    cin>>a;
    string b;
    getline(cin,b);
    for(int i = 0;i<a;i++){
        string s;
        getline(cin,s);
        string c;
        if(s.size() >= 10){
            for(int j = 0;j<10;j++){
            c.push_back(s[j]);
        }
        }
        string d;
        if(c == "simon says"){
            for(int j = 11;j<s.size();j++){
                cout<<s[j];
                d.push_back(s[j]);
            }

        }
        cout<<endl;
    }
    return 0;
}
