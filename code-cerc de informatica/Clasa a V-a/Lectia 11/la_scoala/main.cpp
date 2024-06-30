#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i*i < n){
        i++;
    }
    int k =(i-1)*(i-1);
    int p= n-k;
    cout << p;

    for(int j =k;j>0;j--){
        if(j%(i-1) ==0){
            cout<<endl;
        }
        cout<<j<<" ";
    }
    return 0;
}
