#include <iostream>

using namespace std;

int main()
{
    int x1;
    cin>>x1;
    int x2;
    cin>>x2;
    char op;
    cin>>op;
    if(op=='+'){
        cout << x1 << " + "<< x2 << " = "<< x1+x2 <<endl;
    }else if(op=='*'){
    cout << x1 << " * "<< x2 << " = "<< x1*x2 <<endl;


    }else if(op=='-'){
    cout << x1 << " - "<< x2 << " = "<< x1-x2 <<endl;

    }else if(op=='/'){
    cout << x1 << " / "<< x2 << " = "<< x1/x2 <<endl;

    }else{

    cout << "UNKNWOWN OP " << (char)op << endl;


    }
    return 0;
}
