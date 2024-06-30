#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("paranteze1.in");
    ofstream cout("paranteze1.out");

    string good = "(){}[]";
    string s;
    cin >> s;
    bool ok = true;
    vector<char> st;
    int mx =0;
    for(auto c:s) {
        if(c == '(' || c == '[' || c == '{' ) {
            st.push_back(c);
        }

        if(c == ')') {
            if(st.empty() || st.back() != '(' ) {
                ok = false;
                break;
            }
            st.pop_back();
        }

        if(c == ']') {
            if(st.empty() || st.back() != '[' ) {
                ok = false;
                break;
            }
            st.pop_back();
        }

        if(c == '}') {
            if(st.empty() || st.back() != '{' ) {
                ok = false;
                break;
            }
            st.pop_back();
        }

        bool found = false;
        for(auto g :good) {
            if(c ==g) {
                found = true;
                break;
            }
        }

        if(!found) {
            ok = false;
            break;
        }
        mx = max(mx, (int)st.size());
    }
    if (ok){
        ok = st.empty();
    }
    cout << (ok?mx:-1) << endl;
    return 0;
}
