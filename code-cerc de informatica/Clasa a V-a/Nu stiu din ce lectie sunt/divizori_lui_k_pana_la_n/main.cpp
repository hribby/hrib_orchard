#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;


    for(int i =1;i<=n;i++){
        if(i%k==0){
        cout<<i<<endl;
        }
    }

    return 0;
}
