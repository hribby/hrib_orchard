#include <iostream>

using namespace std;

int main()
{
    int x1;
    cin>>x1;
    int x2;
    cin>>x2;
    int x3;
    cin>>x3;
    int s1;
    cin>>s1;
    int s=x1+x2+x3;
    int last = s-s1;
    if(last == x1 || last ==x2 || last ==x3){
        cout << last << endl;
    }else{
        cout << "date gresite "<< endl;
    }
    return 0;
}
