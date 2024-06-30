#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    string a;
    cin>>a;
    char o;
    cin>>o;
    string b;
    cin>>b;
    int l= max(a.size(),b.size());

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(o == '+') {
        deque<int>v;
        for(int i = 0; i<l; i++) {
            if(i >= b.size()) {
                v.push_front(a[i] - '0');
            } else if(i >= a.size()) {
                v.push_front(b[i] - '0');
            } else {
                int x = a[i] - '0';
                int y = b[i] - '0';
                v.push_front(x+y);

            }
        }
        for(int i = 0; i<v.size(); i++) {
            cout<<v[i];
        }

    }
    if(o == '*') {
       vector<int>v;
       for(int i = 0;i<a.size();i++){
           int k = i;
           int res = 0;
           for(int j = 0;j<b.size();j++){
               if(k>=v.size()){
                  v.push_back((b[j] - '0')*(a[i] - '0')+res);
               }else{
                  v[k] += (b[j] - '0')*(a[i] - '0')+res;
                  if(v[k] > 9){
                    res = 1;
                    v[k] %= 10;
                  }else{
                     res = 0;
                  }
               }
               k++;
           }
       }
       reverse(v.begin(),v.end());
       for(int i = 0;i<v.size();i++){
          cout<<v[i];
       }

    }


    return 0;
}
