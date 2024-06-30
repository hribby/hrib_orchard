#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int y=n;
    for(int i =1;i<n/2;i++){
        cout<<"9";
    }
    cout<<"8";
    n--;
    for(int i =0;i<=n/2;i++){
        cout<<"9";
    }

    return 0;
}
