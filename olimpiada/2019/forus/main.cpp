#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;

bool c1(int cartoane) {
    bool no_zero = true;
    i64 x = cartoane;
    while(x != 0) {
        if(x % 10 == 0) {
            no_zero = false;
            break;
        } else {
            x /= 10;
        }
    }
    return no_zero;
}

i64 c2(int cartoane) {
    deque<i64>d;
    i64 z = cartoane;
    i64 final_number = INT32_MAX;
    i64 final_div = INT32_MAX;
    while(z != 0) {
        i64 zz = z % 10;
        z /= 10;
        d.push_front(zz);
    }
    i64 first = 0;

    for(i64 j = 0; j < d.size(); j++) {
        first = d[0];
        if(first != 0) {
            i64 number = 0;
            for(i64 k = 0; k < d.size(); k++) {
                number *= 10;
                number += d[k];
            }
            i64 div = 0;
            for(i64 l = 2; l*l <= number; l++) {
                if(number %l == 0) {
                    div += 2;
                }
                if(l*l == number) {
                    div -= 1;
                }

            }
            if(div < final_div) {
                final_div = div;
                final_number = number;
            } else {
                if(div == final_div) {
                    if(final_number > div) {
                        final_div = div;
                        final_number = number;
                    }
                }
            }
            d.pop_front();
            d.push_back(first);
        }
        return final_number;
    }
}

    int main() {
        i64 c;
        cin >> c;

        i64 n;
        cin >> n;

        i64 res = 0;

        for(i64 i = 0; i < n; i++) {
            i64 cartoane;
            cin >> cartoane;
            if(c == 1) {
                bool no_zero = c1(cartoane);
                if(no_zero) {
                    res += 1;
                }
            }
            if(c == 2) {
                cout<< c2(cartoane)<< endl;
            }
        }

        if(c == 1) {
            cout << res << endl;
        }

        return 0;
    }
