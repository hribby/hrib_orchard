/*
ID: anndree1
LANG: C++
TASK: dualpal
*/
#include <bits/stdc++.h>

using namespace std;

bool base(int a, int b) {
    string res;
    while(a != 0) {
        res.push_back('0' - (a % b));
        a /= b;
    }
    string x = res;
    reverse(x.begin(),x.end());
    if(x == res) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ifstream cin("dualpal.in");
    ofstream cout("dualpal.out");

    int n,s;
    cin>>n>>s;

    int j = s+1;
    int ct = 0;
    while(ct < n) {
        int k = 0;
        for(int i = 2; i <= 10; i++) {
            if(base(j,i)) {
                k++;
            }
            if(k == 2) {
                cout<<j<<endl;
                ct++;
                break;
            }

        }
        j++;
    }
    return 0;
}
