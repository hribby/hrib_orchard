#include <iostream>

using namespace std;

int main() {
    string s;
    while(cin>>s) {
        bool o1 = false;
        bool o2 = false;
        bool o3 = false;
        bool o4 = false;
        bool o5 = false;
        bool o6 = false;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V') {
                if(!o1) {
                    cout<<1;
                }
                o1 = true;
                o2 = false;
                o3 = false;
                o4 = false;
                o5 = false;
                o6 = false;
            } else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K'|| s[i] == 'Q'|| s[i] == 'S'|| s[i] == 'X'|| s[i] == 'Z') {
                if(!o2) {
                    cout<<2;
                }
                o2 = true;
                o1 = false;
                o3 = false;
                o4 = false;
                o5 = false;
                o6 = false;

            } else if(s[i] == 'D' || s[i] == 'T') {
                if(!o3) {
                    cout<<3;
                }
                o3 = true;
                o2 = false;
                o1 = false;
                o4 = false;
                o5 = false;
                o6 = false;

            } else if(s[i] == 'L') {
                if(!o4) {
                    cout<<4;
                }
                o4 = true;
                o2 = false;
                o3 = false;
                o1 = false;
                o5 = false;
                o6 = false;

            } else if(s[i] == 'M' || s[i] == 'N') {
                if(!o5) {
                    cout<<5;
                }
                o5 = true;
                o2 = false;
                o3 = false;
                o4 = false;
                o1 = false;
                o6 = false;

            } else if(s[i] == 'R') {
                if(!o6) {
                    cout<<6;
                }

                o6 = true;
                o2 = false;
                o3 = false;
                o4 = false;
                o5 = false;
                o1 = false;

            } else {
                o6 = false;
                o2 = false;
                o3 = false;
                o4 = false;
                o5 = false;
                o1 = false;
            }
        }
        cout<<endl;

    }
    return 0;
}
