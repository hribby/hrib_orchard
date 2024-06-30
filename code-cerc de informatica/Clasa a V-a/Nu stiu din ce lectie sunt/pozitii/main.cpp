#include <iostream>
#include<vector>

using namespace std;

int main()
{

    int x;
    cin>>x;
    vector<int>v(x);
    int s=0;

    for(int i=0; i<x; i++)
    {
        cin>>v[i];
    }
    for(int j=0; j<x; j++)
    {
        if(v[j]==j)
        {
            s+=1;
        }

    }


cout << s << endl;
return 0;
}
