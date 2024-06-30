#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("subcresc.in");
    ofstream cout("subcresc.out");
    int n;
    cin >> n;

    int l = 1;
    int lmax = 0;

    int a;
    cin >> a;

    for(int i = 1; i < n; i++)
    {
        int b;
        cin >> b;
        if(b >= a)
        {
            l += 1;
        }
        else
        {
            if(l > lmax)
            {
                lmax = l;
            }
            l = 1;
        }
        if(i == n - 1)
        {
            if(l > lmax)
            {
                lmax = l;
            }
        }
        a = b;

    }
    cout << lmax << endl;
    return 0;
}
