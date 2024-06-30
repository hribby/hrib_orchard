#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r = n%10;
    bool g=false;
    int i =0;
    while(n>0)
    {
        i =n%10;

        if(i==r)
        {
            n=n/10;
            g=true;
        }
        else
        {
            g=false;
            break;

        }
    }

    if(g==true)
    {
        cout << "DA" << endl;

    }
    else
    {
        cout << "NU" << endl;
    }

    return 0;
}
