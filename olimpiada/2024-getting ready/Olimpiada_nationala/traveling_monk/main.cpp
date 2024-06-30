#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int a,d;
    cin>>a>>d;
    vector<pair<int64_t,int64_t>>v1;
    v1.push_back(make_pair(0,0));
    int64_t h,t;
    int64_t q = 0;
    int64_t p = 0;
    for(int i = 0; i<a; i++) {
        cin>>h>>t;
        q+=h;
        p +=t;
        v1.push_back(make_pair(q,p));
    }
    vector<pair<int64_t,int64_t>>v2;
    q = v1[a-1].first;
    p = 0;
    v2.push_back(make_pair(v1[a-1].first,0));
    for(int i = 0; i<d; i++) {
        cin>>h>>t;
        q+=h;
        p+=t;
        v2.push_back(make_pair(a-h,p));
    }
    int64_t l1 = 0;
    int64_t r1 = v1[a].second;
    long double fnal = 1e9;
    while(r1-l1 >=1e-6){
          long double mid = (l1+r1)/2;
          pair<int64_t,int64_t>x = {floor(mid),-1};
          auto upb = upper_bound(v1.begin(),v1.end(),x);
          if(upb != v1.begin()){
            upb--;
          }
          long double hour1 = upb -> second;
          int64_t poz = upb - v1.begin();
          hour1+=(mid-upb->first)/(v1[poz+1].first-upb->first)*(v1[poz+1].first-upb->second);

          upb = upper_bound(v2.begin(),v2.end(),x);
          if(upb != v2.begin()){
            upb--;
          }
          long double hour2 = upb -> second;
          poz = upb - v2.begin();
          hour1+=(mid-upb->first)/(v1[poz+1].first-upb->first)*(upb->second-v1[poz+1].first);
         long double res = hour1-hour2;
         if(res<=1e-5){
            fnal = min(fnal,res);
         }
         if(res<0){
            l1 = mid;
         }else{
           r1 = mid;
         }
    }
    cout.precision(5);
    cout<<fixed;
    cout<<fnal<<endl;
    return 0;
}
