#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i = 0; i<a; i++) {
        string d,m,y;
        cin>>d>>m>>y;
        vector<int>v;

        int zero = 0;
        int one = 0;
        for(int i = 0; i<2; i++) {
            v.push_back(d[i]);
            if(d[i] == '0') {
                zero++;
            }
            if(d[i] == '1') {
                one++;
            }
        }
        for(int i = 0; i<2; i++) {
            v.push_back(m[i]);
            if(m[i] == '0') {
                zero++;
            }
            if(m[i] == '1') {
                one++;
            }
        }
        for(int i = 0; i<4; i++) {
            v.push_back(y[i]);
            if(y[i] == '0') {
                zero++;
            }
            if(y[i] == '1') {
                one++;
            }
        }
        if(one <1 && zero <1) {
            cout<<0<<endl;
            continue;
        }
        if(zero > 5) {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        vector<int>res(3,500000);
        int ct = 0;
        do {
            int d1 = ((v[0]-'0')*10)+(v[1] - '0');
            int m1 = ((v[2]-'0')*10)+(v[3] - '0');
            int y1 = ((v[4]-'0')*1000)+((v[5] - '0')*100) +((v[6] - '0')*10)+(v[7] - '0');
            if(d1>=1 && d1<= 28 && m1 >=1 && m1<=12 &&y1 >= 2000) {
                ct ++;
                if(y1<res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                } else if(m1 < res[1] && y1 <= res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                } else if(d1<res[0] && m1 <= res[1] && y1 <= res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                }

            } else if(d1 == 29 && m1 == 2 && y1 >=2000) {
                if(y1%400 == 0 && y1%4 == 0) {
                    ct ++;
                    if(y1<res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(m1 < res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(d1<res[0] && m1 <= res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    }
                } else if(y1%4 == 0 && y1%100 != 0) {
                    ct ++;
                    if(y1<res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(m1 < res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(d1<res[0] && m1 <= res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    }

                }
            } else if(d1 == 31 && y1 >= 2000) {
                if( m1 == 1 || m1== 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
                    ct ++;
                    if(y1<res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(m1 < res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    } else if(d1<res[0] && m1 <= res[1] && y1 <= res[2]) {
                        res[0] = d1;
                        res[1] = m1;
                        res[2] = y1;
                    }

                }
            } else if(d1 >= 29 && m1 != 2 && d1 < 31 && y1 >=2000 && m1 <= 12 && m1 >=1) {
                ct ++;
                if(y1<res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                } else if(m1 < res[1] && y1 <= res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                } else if(d1<res[0] && m1 <= res[1] && y1 <= res[2]) {
                    res[0] = d1;
                    res[1] = m1;
                    res[2] = y1;
                }
            }

        } while(next_permutation(v.begin(),v.end()));
        if(res[0] == 500000 || res[1] == 500000 || res[2] == 500000 || ct == 0){
            cout<<"0";
        }else{
        cout<<ct<<" ";
        for(int i = 0; i<3; i++) {
            if(res[i] <= 9){
                cout<<"0";
            }
            cout<<res[i]<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}
