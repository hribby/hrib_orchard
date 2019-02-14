#include <iostream>

using namespace std;

int main()
{
    int x1;
    cin>>x1;
    int x2;
    cin>>x2;
    if(x2==0){
        cout<<"impartirea imposibila"<<endl;
    }else{
        cout << x1/x2<< endl;
        cout << x1 % x2<< endl;
    }
    return 0;
}
