#include <iostream>
#include <deque>
#include <fstream>

using namespace std;
typedef int64_t i64;

int main()
{
  ifstream cin("monsters.in");
    ofstream cout("monsters.out");

    i64 c;
    cin >> c;

    i64 fnr = 0;
    i64 cc = c;
    deque<i64>d;
    while(cc != 0){
           d.push_front(min((i64)1,cc % 10));
           cc /= 10;
    }

    for(int i = 0;i<d.size();i++){
        fnr += (1<<(d.size()-i-1)) * d[i];
    }
    cout << fnr <<endl;


    return 0;
}
