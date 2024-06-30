#include <iostream>

using namespace std;

int main()
{
    int zile;
    cin>>zile;
    int capete =6;

    for(int i =0;i<zile;i++){
        capete=capete-1+6;
    }

    cout << capete << endl;
    return 0;
}
