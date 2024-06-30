#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;


    int b;
    cin>>b;


    int c;
    cin>>c;


    int d;
    cin>>d;

    if(a > b)
    {
        int f = a;
        a = b;
        b = f;
    }
    if(c > d)
    {
        int n= c;
        c = d;
        d = c;
    }
    if(a > c)
    {
        int x = a;
        a = c;
        c = x;
    }
    if(b > d)
    {
        int g = b;
        b = d;
        d = g;
    }
    if(b > c)
    {
        int m = b;
        b = c;
        c = b;
    }
    cout << a <<" "<< b <<" "<< c <<" " << d << endl;




    return 0;
}
