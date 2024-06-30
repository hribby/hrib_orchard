#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    while(cin>>n) {

          if(n == 0){
            break;
          }
        vector<pair<int,int>>v1;
        vector<int>v2(n);
        for(int i = 0; i<n; i++) {
            int a;
            cin>>a;
            v1.push_back(make_pair(a,i));
        }

        for(int i = 0; i<n; i++){
            cin>>v2[i];

        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        vector<int>res(n);
        for(int i = 0;i<n;i++){
            res[v1[i].second]=v2[i];
            }
            for(int i = 0;i<n;i++){
                cout<<res[i]<<endl;//accidently modified...might not work:))))))))))
            }
            cout<<" "<<endl;

        }

 return 0;
    }


