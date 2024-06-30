#include <bits/stdc++.h>
#define endl '\n'
#define int int64_t

using namespace std;

vector<int> primes;
void f(){
    primes.reserve(100000);
    vector<bool> v(1000000, 0);
    for(long long i = 2; i<1000000 ;i++){
        if(!v[i]){
            primes.push_back(i);
            for(long long j = i * i; j < 1000000; j += i){
                v[j] = true;
            }

        }
    }

}

int32_t main() {
    //ifstream cin("factorial.in");
    //ofstream cout("factorial.out");

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    f();

    int x;
    vector<int> v;
    v.reserve(10);
    int idx = 0;
    while(cin>>x) {
        v.push_back(x);
        idx++;
    }

    int n = v.size();
    vector<int> res;
    res.reserve(primes.size());
    for(int i = 0; i < n; i++) {
        res.clear();
        for(int j = 0; j < primes.size() && primes[j] <= v[i]; j++){
            long long a = primes[j];
            int r = 0;
            while(a <= v[i]){
                r += v[i] / a;
                a *= primes[j];
            }

            res.push_back(r);
        }

        for(auto& e : res){
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}
