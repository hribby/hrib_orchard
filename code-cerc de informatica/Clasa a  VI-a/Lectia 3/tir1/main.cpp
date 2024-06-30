#include <iostream>
#include <fstream>
using namespace std;
typedef int64_t i64;

int main()
{
   ifstream cin("tir1.in");
   ofstream cout("tir1.out");

    i64 h;
    cin >> h;

    i64 f;
    cin >> f;

    i64 d;
    cin >> d;

    i64 g;
    cin >> g;

    if(f != 0 && g!=0){
    double t1 = d / (double)f;
    double t2 = h / (double)g;

    if(abs(t1 -t2) < 0.000000000001){
       cout <<"da"<<endl;
    }else{
       cout <<"nu"<<endl;
    }
    }else{
        if(f==0 && g==0 && d==0){
            cout <<"da"<<endl;
        }else
        {
        cout <<"nu"<<endl;
        }

    }
    return 0;
}
