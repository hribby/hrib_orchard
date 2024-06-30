#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("comune.in");
    ofstream cout("comune.out");
    int n;
    cin>>n;

    int m;
    cin>>m;

    int res = 0;

    for(int i = 0; i < 10; i++){

        int x = n;
        int fx = 0;
        while(x != 0){
            if(x % 10 == i){
                fx +=1;
            }
            x/=10;
        }

        int y = m;
        int fy = 0;
        while(y != 0){
            if(y % 10 == i){
                fy+=1;
            }
            y/=10;
        }
        if(fx >0 && fy >0){
            res+=min(fx,fy);
        }
    }
    cout << res << endl;
    return 0;
}
