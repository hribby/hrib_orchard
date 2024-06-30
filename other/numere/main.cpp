#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;

i64 c1(vector<i64>&v) {
    int numar = 1;
    int l = 1;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 1) {
            numar = numar + l;
        } else {
            numar = numar + l + 1;
        }
        l++;

    }
    return numar;

}
i64 c2(int k) {
    if(k == 1) {
        return 1;
    } else {
        int l = 1;
        int nr1 = 1;
        int nr2 = 0;
        bool not_fond = true;
        while(not_fond) {
            nr1 = l + nr1;
            l += 1;
            if(k > nr2 && k < nr1) {
                not_fond = false;
                l -= 1;
                break;
            }
            if(k == nr1) {
                nr2 = nr1;
                break;
            }

            nr2 = nr1;
        }

        int place = 1;
        for(int i = 0; i < l; i++) {
            if(nr2 == k) {
                break;
            }
            nr2 += 1;
            place += 1;
        }
        int nf = 0;
        i64 crtl = l;
        for(int i = 0; i < crtl - place; i++) {
            nf += nr2;
            nr2 = (nr2 - l) + 1;
            l--;
        }
        nf += nr2;
        if(place == 1) {
            return nf;
        } else {
            while(nr2 > 1) {
                nf += nr2 - l;
                nr2 = nr2 - l;
                l--;
            }
            return nf;
        }
    }

}

int main() {

    ifstream cin("numere.in");
    ofstream cout("numere.out");
    int c;
    cin >> c;
    if(c == 1) {
        vector<i64>v;
        for(int i = 0; i < n; i++) {
            int drum;
            cin >> drum;
            v.push_back(drum);

        }
        cout << c1(v)<<endl;
        int n;
        cin >> n;

    }
    if(c == 2) {
        int k;
        cin >> k;

        cout << c2(k) <<endl;

    }



    return 0;
}
