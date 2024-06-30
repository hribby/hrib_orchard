#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >>n) {
        vector<string>v(n);
        for(int i = 0; i<n; i++) {
            cin>>v[i];
        }
        int p;
        cin>>p;
        vector<pair<string,string>>vp(p);
        for(int i = 0; i<p; i++) {
            string a,b;
            cin>>a>>b;
            vp[i] = make_pair(a,b);
        }
        sort(v.begin(), v.end());
        bool yes  = false;
        do {
            bool okay = true;
            for(int i = 0; i<n-1; i++) {
                pair<string,string>q;
                q = make_pair(v[i],v[i+1]);
                for(int j = 0; j<p; j++) {
                    if(vp[j].first == q.first || vp[j].second == q.first) {
                        if(vp[j].first == q.second || vp[j].second == q.second) {
                            okay = false;
                            break;
                        }

                    }
                }
                if(!okay) {
                    break;
                }
            }
            if(okay) {
                for(int i = 0; i<n; i++) {
                    cout<<v[i]<<" ";
                }
                yes = true;
                cout<<endl;
                break;
            }


        } while(next_permutation(v.begin(),v.end()));
        if(!yes){
           cout<<"You all need therapy."<<endl;
        }

    }
    return 0;
}
