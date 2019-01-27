#include <iostream>

using namespace std;

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int max3(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if(y<z)
        {
            return z;
        }
        else
        {
            return y;
        }
    }
}

void print_even(int from, int to)
{
    for(int i=from; i<=to; i+=7)
    {jj
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout <<  max3(12,3,78)  << endl;
    cout <<  max3(12,333,78)  << endl;
    print_even(10,1000000);
    return 0;
}
