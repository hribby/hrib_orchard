#include <bits/stdc++.h>

using namespace std;

typedef int64_t i6;

int main() {
    ifstream cin("TREN.in");
    ofstream cout("TREN.out");
    i6 t;
    cin>>t;
       vector<i6> l1(24*60,0),l2(24*60,0);
    i6 l1c =0;
    i6 l2c =0;
    i6 ft =24*60;
    i6 lt =0;
    for(int i=1; i<=t; i++) {
        i6 l, h,m,d;
        cin>>l>>h>>m>>d;
        i6 st = h*60 +m;
        ft = min(ft,st);
        i6 et  = st + d;
        lt = max(lt,et);
        if(l==1) {
             l1c++;
            for(int j=st; j<=et; j++) {
                l1[j] =i;
            }
        } else {
            l2c++;
            for(int j=st; j<=et; j++) {
                l2[j] =i;
            }
        }
    }
    set<i6> l2v;
    for(int i=ft;i<=lt;i++){
        if(l2[i] !=0 && l1[i]==0){
            l2v.insert(l2[i]);
        }
    }
    i6 mx =0;
    i6 crt=0;
    for(int i=ft;i<=lt;i++){
        if(l1[i] ==0 && l2[i]==0){
            crt++;
        }else{
            mx = max(mx,crt);
            crt = 0;
        }
    }


    cout << max(l1c,l2c)<<" "<<l1c+l2v.size()<<" "<<mx<<endl;
    return 0;
}
