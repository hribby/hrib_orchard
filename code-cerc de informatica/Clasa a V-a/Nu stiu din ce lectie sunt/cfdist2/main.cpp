#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("cfdist.in");
    ofstream cout("cfdist.out");
    uint64_t n;
    cin >> n;

    vector<int>v(10,0);
    while(n != 0){
          v[n % 10] += 1;
          n /= 10;

    }
    int ct=0;
    for(auto +e:v){
        if(e>0){
            ct+=1;
        }
    }
    cout << ct << endl;
    return 0;
}
