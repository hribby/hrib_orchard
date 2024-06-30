#include <iostream>
#include <set>
using namespace std;

int main()
{
    uint64_t n;
    cin >> n;

    set<int>v;
    while(n != 0){
          auto digit =n % 10;
          v.insert(digit);
          n /= 10;
    }

    cout << v.size()<< endl;
    return 0;
}
