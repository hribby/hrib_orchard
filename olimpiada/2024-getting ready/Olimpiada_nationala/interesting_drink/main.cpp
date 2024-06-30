#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    vector<int>day(q);
    for(int i = 0; i<q; i++) {
        cin>>day[i];
    }
    for(int i = 0; i<q; i++) {
        int res;
        if(day[i]<v[0]){
            res=0;
        } else if(day[i]>=v[n-1]){
            res =n;
        } else{
            auto f = upper_bound(v.begin(),v.end(),day[i]);
            res = distance( v.begin(),f);
        }
//        int l = 0;
//        int r = n;
//        int mx = n;
//        while(l<r) {
//            int mid = l+(r-l)/2;
//            if(v[mid]>=day[i]) {
//               r = mid;
//                if(v[mid]>day[i]){
//                   mx = mid - 1;
//                }else{
//                    mx = mid +1;
//                }
//            } else {
//                l = mid +1;
//            }
//        }
//        if(day[i] <v[0]) {
//            cout<<0<<endl;
//        } else {
//            if(day[i]>=v.back()) {
//                cout<<n<<endl;
//            } else {
//                cout<<mx<<endl;
//            }
//
//        }
// dosen't work on test case 5
    cout<<res<<endl;
    }
    return 0;
}
