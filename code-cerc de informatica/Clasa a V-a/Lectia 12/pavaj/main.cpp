#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;

    int y;
    cin>>y;

    if(y>x){
        if(y/2==x){
            cout<<"2"<<endl;
        }else{
            while(x >0){
                  int z = x;
                  x=y%x;
                  y = z;
            }
            cout<<y<<endl;


        }
    }else{
        if(x/2==y){
            cout<<"2"<<endl;
        }else{
            while(y >0){
                  int z = y;
                  y=x%y;
                  x = z;
            }
            cout<<x<<endl;


        }
    }



    return 0;
}
