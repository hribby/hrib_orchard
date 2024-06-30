#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    //ifstream cin("kth.in");
    //ofstream cout("kth.out");
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v(n);
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    map<int, int>m1;
    map<int, int>m2;

    int len1 = 0;
    int len2 = 0;

    vector<int> res(n);
    for(int i = 0; i <= n; i++) {
        if(i == l) {
            while(len1 < k) {
                m1[m2.begin()->first]++;
                m2.begin()->second = m2.begin()->second - 1;
                if(m2.begin()->second == 0) {
                    m2.erase(m2.begin());
                }
                len1++;
                len2--;
            }
        }

        if(len1 + len2 < l) {
            len2++;
            m2[v[i]]++;
        } else {
            int f = i - l;
            /// find th kth element
            auto it = m1.end();
            it--;
            res[f] = it->first;

            if(i == n) {
                continue;
            }

            /// add and remove from maps
            if(m1.count(v[f])) {
                m1[v[f]]--;
                if(m1[v[f]] == 0) {
                    m1.erase(v[f]);
                }
                len1--;
            }else{
                m2[v[f]]--;
                if(m2[v[f]] == 0) {
                    m2.erase(v[f]);
                }
                len2--;
            }

            it = m1.end();
            it--;
            if(v[i] <= it->first) {
                m1[v[i]]++;
                len1++;
            } else {
                m2[v[i]]++;
                len2++;
            }

            while(len1 < k) {
                m1[m2.begin()->first]++;
                m2.begin()->second =m2.begin()->second - 1;
                if(m2.begin()->second == 0) {
                    m2.erase(m2.begin());
                }
                len1++;
                len2--;
            }
            while(len1 > k){
                it = m1.end();
                it--;
                m2[it->first]++;
                it->second = it->second - 1;
                if(it->second == 0) {
                    m1.erase(it);
                }
                len1--;
                len2++;
            }
        }
    }

    int q;
    cin >> q;
    for(int qq = 0; qq < q; qq++) {
        int x;
        cin >> x;
        cout << res[x - 1] << endl;
    }

    return 0;
}
