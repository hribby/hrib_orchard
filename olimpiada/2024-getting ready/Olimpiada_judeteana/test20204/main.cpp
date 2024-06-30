#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("factorial.in");
    ofstream cout("factorial.out");
    vector<bool> v(1000000, 0);
    for(long long i = 2; i<1000000 ;i++){
        if(!v[i]){
            cout << i << ", ";
            for(long long j = i * i; j < 1000000; j += i){
                v[j] = true;
            }

        }
    }

    return 0;
}
