#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    //ifstream cin("cifre3.in");
    //ofstream cout("cifre3.out");
    int a;
    cin >> a;

    int b;
    cin >> b;
    vector<int>va(10,0);
    vector<int>vb(10,0);
    vector<int>m;
    bool s=false;
    bool d=false;

    if(a>0){
        int aa = a;
        while(aa != 0){
            va[aa % 10] += 1;
            aa /= 10;
        }
    }
    if(b>0){

        int bb = b;
        while(bb != 0){
            vb[bb % 10] += 1;
            bb /= 10;
        }
    }

    for(int i = 0;i < 10; i++){
         if(va[i] > 0 && vb[i] == 0){
            cout<< i << " ";
            d=true;
         }
         if(va[i] > 0 && vb[i] > 0){
                m.push_back(i);
                s=true;
            }

    }
    if(d=false){
       cout<<"-1"<<endl;
    }
    if(s=false){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<" "<<endl;
     sort(m.rbegin(),m.rend());

    for(int j = 0; j < m.size(); j++){
         cout << m[j];

    }


    return 0;
}
