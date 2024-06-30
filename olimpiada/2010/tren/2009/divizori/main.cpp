#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;

int main() {
    ifstream cin{"DIVIZ.in"};
    ofstream cout{"DIVIZ.out"};

    int n;
    cin >> n;

//    deque<i64>d;

    int nn = n;
    int sz = 1; //size of n
    int sz2 = 0;

    while(nn != 0) {
        sz *= 10;
        sz2 += 1;
        nn /= 10;
    }
    sz /= 10;

    int mx_div = 0; //max nr of divs
    int ld = 0; //largest div
    vector<int>v;
    for(int i = 0; i < sz2; i++) {
        int nr_div = 0;
        int b_div = 0; //biggest div
        for(int j = 2; j * j <= n ; j++) {
            if(n % j == 0) {
                nr_div += 1;
                if(n/j !=j) {
                    nr_div += 1;
                }
                b_div = max(b_div,n / j);
            }
        }
        if(nr_div > mx_div) {
            mx_div = nr_div;
            v.clear();
            v.push_back(n);
        } else {
            if(nr_div == mx_div) {
                v.push_back(n);
            }

        }
        if(b_div > ld) {
            ld = b_div;

        }
        n = (n % sz) * 10 + (n / sz);
    }

    for(int i = 0; i < v.size(); i++) {
        cout<< v[i];
        if(i<v.size()-1){
            cout<< " ";
        }else{
            cout <<endl;
        }
    }

    cout<< ld <<endl;

    return 0;
}
