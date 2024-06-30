#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=0;
    int nr_par=0;

    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            nr_par+=1;
        }
        n=n/10;
    }
    cout << nr_par << endl;
    return 0;
}
