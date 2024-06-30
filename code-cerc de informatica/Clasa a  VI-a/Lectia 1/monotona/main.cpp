#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;


int main()
{
    ifstream cin("monotona.in");
    ofstream cout("monotona.out");

    i64 n;
    cin >> n;

    i64 last;
    cin>>last;
    bool c = true;
    bool d = true;
    for(i64 i = 1;i < n;i++){
        i64 crt;
        cin >> crt;
        if(c){
            c = (last <= crt);
        }
        if(d){
            d = (last >= crt);
        }

        last = crt;
    }
    if(c  || d ){
       cout << "da" <<endl;
    }else{
        cout << "nu" <<endl;
    }
    return 0;
}
