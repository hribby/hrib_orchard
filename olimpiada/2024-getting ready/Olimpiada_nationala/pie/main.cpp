#include <bits/stdc++.h>
#define   endl '\n'

using namespace std;

int main() {
    auto pi = atan(1)*4;
    cout<<fixed<<setprecision(6);
    int test_case;
    cin>>test_case;
    for(int t = 0; t<test_case; t++) {
        long long n,f;
        cin>>n>>f;
        f++;
        long double a;
        vector<long double>v;
        for(int i = 0; i<n; i++) {
            cin>>a;
            v.push_back(pi * a * a);
        }
        sort(v.begin(),v.end());
        long double l = 0;
        long double r = v[n-1];
        long double res = 0;
        while(abs(r - l) >1e-4) {
            long double mid = (l+r)/2;
            int nr = 0;
            for(int i = 0; i<n; i++) {
                nr+=v[i]/mid;
            }
            bool okay = false;
            if(nr>=f) {
                res=max(res,mid);
                l = mid;
            } else {
                r = mid;
            }

        }
        cout<<res<<endl;
    }


    return 0;
}
