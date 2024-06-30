#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    ifstream cin("ucif.in");
    ofstream cout("ucif.out");

    int n;
    cin >> n;

    int last_nr = 0;
    for(int i = 1; i <= n; i++) {
        int x = i;
        x %= 10;
        for(int j = 2; j <= i; j++){
            x *= i;
            x %= 10;
        }
        last_nr += x;
        last_nr %= 10;
    }
    cout << last_nr << endl;

    return 0;
}
