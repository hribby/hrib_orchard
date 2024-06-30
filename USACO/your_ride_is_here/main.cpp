/*
ID: anndree1
LANG: C++
TASK: ride
*/
#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;

int main()
{
    ifstream cin("ride.in");
    ofstream cout("ride.out");

    string a;
    cin >> a;

    string b;
    cin >> b;



     i64 suma = 1;
    for(int i = 0; i < a.size(); i++){

              suma *= (a[i]-'A'+1);


    }

    i64 sumb = 1;
    for(int i = 0; i < b.size(); i++){

              sumb *= (b[i]-'A'+1);


    }
    if(sumb % 47 == suma % 47){
        cout<<"GO"<<endl;


    }else{
        cout<<"STAY"<<endl;
    }


    return 0;
}
