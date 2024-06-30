#include <iostream>
#include <fstream>

using namespace std;

int  gcd(int a, int b){
       while(b!=0){
            int tmp=b;
            b=a%b;
            a=tmp;
       }
       return a;
}


int main()
{
    ifstream cin("vraji.in");
    ofstream cout("vraji.out");
    int nre;
    cin >> nre;

    int res = -1;
    int mx = 0;
    for(int i = 0; i < nre; i++)
    {

        int nro;
        cin >> nro;

        int v;
        cin >> v;


        if(mx<v*nro)
        {
            mx=v*nro;
        }
        if(i==0){
            res = v*nro;
        }else{
            res = gcd(max(res,v*nro),min(res,v*nro));
        }
    }
    cout << mx << endl;
    cout<<res<<endl;
    return 0;
}
