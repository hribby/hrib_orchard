#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
void myFunction(deque<long long> &d1,deque<long long> &d2) {
            long double l1 = d1.size();
            long double l2 = d2.size();
            if(l2-l1 > 1) {
                long double x = (l2-l1)/2;
                for(int i = 0;i<floor(x);i++) {
                    d1.push_back(d2.front());
                    d2.pop_front();
                }
            } else if(l1-l2 > 1) {
                  long double x = (l1-l2)/2;
                for(int i = 0;i<floor(x);i++) {
                    d2.push_front(d1.back());
                    d1.pop_back();
                }
            }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long N;
    cin>>N;
    deque<long long>d1;
    deque<long long>d2;
    string s;
    long long a;
    for(int k = 0; k<N; k++) {
        cin>>s;
        cin>>a;
        if(s == "push_back") {
            d2.push_back(a);
            myFunction(d1,d2);
        }
        if(s == "push_front") {
            d1.push_front(a);
            myFunction(d1,d2);
        }
        if(s == "push_middle") {
           if(d1.size() < d2.size()){
             d1.push_back(d2.front());
             d2.pop_front();
           }
           d2.push_front(a);
           myFunction(d1,d2);
        }
        if(s == "get") {
            if(a < d1.size()) {
                cout<<d1[a]<<endl;
            } else {
                cout<<d2[a-d1.size()]<<endl;
            }
        }
    }
    return 0;
}
