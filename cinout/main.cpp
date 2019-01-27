#include <iostream>

using namespace std;

void print_tri(){
    char c;
    cin >>c;
    cout << c << endl;
    cout << c << c<< endl;
    cout << c << c<< c<< endl;
    for(int i=0;i<10000;i+=1){
        cout <<c;
    }
    cout<<endl;
}

void print_tri_n(){
    int n;
    cin>>n;
    cout << n << endl;
    cout << n+2<<" "<<n+2<< endl;
    cout << n+4<<" "<<n+4<<" "<<n+4<<" "<<n+4<< endl;
    cout << n+6<<" "<<n+6<<" "<<n+6<<" "<<n+6<<" "<<n+6<< endl;
}

int main()
{
    return 0;
}
