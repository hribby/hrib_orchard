#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    deque<int>v;
    int lft = 0;
    int x = 0;
    int a1 = a.size() - 1;
    int b1 = b.size() - 1;
    while(true) {
        if(b1 < 0) {
            while(a1 >= 0){
                x = a[a1] - '0' + lft;
                if(x > 9){
                    lft = x/10;
                    x %= 10;
                }else{
                    lft = 0;
                }
                v.push_front(x);
                a1--;
            }
            break;
        }else if(a1 < 0) {
            while(b1 >= 0){
                x = b[b1] - '0' + lft;
                if(x > 9){
                    lft = x/10;
                    x %= 10;
                }else{
                    lft = 0;
                }
                v.push_front(x);
                b1--;
            }
            break;
        }else {
            int z = a[a1] - '0';
            int y = b[b1] - '0';
            int tmp = z+y+lft;
            if( tmp > 9) {
                lft = (tmp)/10;
                tmp %= 10;
            }else{
               lft = 0;
            }
            v.push_front(tmp);

        }
        a1--;
        b1--;
    }
    if(lft != 0){
        v.push_front(lft);
    }
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i];
    }
    return 0;
}
