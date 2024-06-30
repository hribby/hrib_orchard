#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    while(true){
        cin>>a>>b;
        if(a == 0 && b == 0){
            break;
        }
        int cary = 0;
        int res = 0;
        while(a > 0 && b > 0){
            int x = (a%10) + (b%10) + res;
            if(x > 9){
                cary += x/10;
                res = 1;
            }else{
              res = 0;
            }
            a /= 10;
            b /= 10;
            if(b == 0){
                while(a > 0){
                    if(res + a%10 >9){
                        cary++;
                        res =1;
                        a /= 10;
                    }else{
                       break;
                    }
                }
            }
            if(a == 0){
                while(b>0){
                    if(res + b%10 >9){
                        cary++;
                        res =1;
                        b /= 10;
                    }else{
                       break;
                    }
                }
            }
        }
        if(cary == 0){
            cout<<"No carry operation."<<endl;
        }else if(cary == 1){
           cout<<cary<<" carry operation."<<endl;
        }else{
           cout<<cary<<" carry operations."<<endl;
        }

    }
    return 0;
}

