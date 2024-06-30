/*
ID: anndree1
LANG: C++
TASK: crypt1
*/
#include <bits/stdc++.h>

using namespace std;
vector<int>v;
map<int,int>put_it_in_a_map(int &x){
    map<int,int>digits;
    while(x > 0) {
        digits[x % 10]++;
        x /= 10;
    }
    return digits;
}
bool good(int &x,int p) {
    map<int,int>digits = put_it_in_a_map(x);
    int hola = 0;
    for(auto e:v) {
        if(digits[e] >= 1) {
            hola+=digits[e];
        }
    }
    if(hola == p) {
        return true;
    } else {
        return false;
    }

}
int okay(int i, int j) {
    int x = i;
    if(!good(x,3)) {
        return 0;
    }
    x = j;
    if(!good(x,2)) {
        return 0;
    }
    int q = i * (j % 10);
    if(q >= 1000 || !good(q,3)) {
        return 0;
    }
    x = j / 10;
    q = i * (x % 10);
    if(q >= 1000 || !good(q,3)) {
        return 0;
    }
    int p = i* j;
    if(p >= 10000 || !good(p,4)){
        return 0;
    }
    return 1;
}
int main() {
    ifstream cin("crypt1.in");
    ofstream cout("crypt1.out");

    int n;
    cin>>n;
    int res = 0;
    for(int i = 0; i<n; i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i = 100; i<1000; i++) {
        for(int j = 10; j<100; j++) {
                if(i*j >= 10000){
                   break;
                }
            res+=okay(i,j);
        }
    }
    cout<<res<<endl;
    return 0;
}
