#include <iostream>

using namespace std;

int main()
{
    int x1;
    cin>>x1;
    int x2;
    cin>>x2;
    int n2;
    int n3;
    if(x1>x2){
        n2=x1*2;
        n3=x2*3;

    }else{
        n2=x2*2;
        n3=x1*3;
    }
    cout<<n3<<" "<<n2<<endl;
return 0;
}

