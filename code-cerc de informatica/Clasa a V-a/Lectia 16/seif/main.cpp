#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

   ifstream cin("seif2.in");
    ofstream cout("seif2.out");
    int n;
    cin >> n;

    vector<int>v(n);


    int mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 1; i < n - 1; i++) {
        int nr = v[i];
        int x = v[i + 1];
        int len = 1;
        if (x == 0) {
            len = 10;
        } else {
            while(x != 0) {
                len *= 10;
                x /= 10;
            }
        }
        nr = nr * len + v[i + 1];
        if(nr > mx) {
            mx = nr;
        }
    }
    cout << mx << endl;


    return 0;
}
