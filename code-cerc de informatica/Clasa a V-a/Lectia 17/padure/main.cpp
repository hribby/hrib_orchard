#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int tmp1 = 0;
    int mx = 0;
    int a;
    cin >> a;
    for(int i = 1; i < n; i++) {
        int b;
        cin >> b;
        int tmp2 = 1;
        for(int j = 2; j <= min(a, b); j++) {
            if(a % j == 0 && b % j == 0) {
                tmp2++;
                cout << "tmp2 " << tmp2 << endl;
                break;

            }
        }
        if(tmp2 == 1) {
            if(tmp1 > mx) {
                mx = tmp1;
                cout << "mx " << mx << endl;
            }
            tmp1 = 0;
        } else {
            tmp1 += tmp2;

        }
        a = b;
    }


    cout << mx << endl;
    return 0;
}
