#include <iostream>

using namespace std;

int main()
{
    int s1;
    int s2;
    cin>>s1;
    cin >>s2;
    if (s1>s2){
        cout<<"locul 1 " << s1<< endl;
        cout<<"locul 2 " << s2<< endl;
    }else if (s1 < s2){
        cout<<"locul 1 " << s2<< endl;
        cout<<"locul 2 " << s1<< endl;
    }else{
        cout<<"la egalitate " << s2<< endl;
    }

    return 0;
}
