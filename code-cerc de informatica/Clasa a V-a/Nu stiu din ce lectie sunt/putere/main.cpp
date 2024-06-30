#include <iostream>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;


int main()
{
    i64 a;
    cin >> a;

    i64 b;
    cin >> b;
    i64 x = b;
    i64 sum = 1;

    while(x != 0){
          sum = sum*a;
          x--;


    }
    cout << sum << endl;
    return 0;
}
