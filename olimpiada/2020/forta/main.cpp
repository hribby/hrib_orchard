/*
         o                             o
        <|>                           <|>
        / \                           < \
      o/   \o       \o__ __o     o__ __o/  \o__ __o     o__  __o     o__  __o      o__ __o/
     <|__ __|>       |     |>   /v     |    |     |>   /v      |>   /v      |>    /v     |
     /       \      / \   / \  />     / \  / \   < >  />      //   />      //    />     / \
   o/         \o    \o/   \o/  \      \o/  \o/        \o    o/     \o    o/      \      \o/
  /v           v\    |     |    o      |    |          v\  /v __o   v\  /v __o    o      |
 />             <\  / \   / \   <\__  / \  / \          <\/> __/>    <\/> __/>    <\__  / \
 */
#ifndef __AHA__HEADER
#define __AHA__HEADER

#include <bits/stdc++.h>
using namespace std;
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
#define ft first
#define d second
#define sz(x) (i6) x.size()
#define psb(x) push_back(x)
#define ppb() pop_back()
#define bg(x) x.begin()
#define ed(x) x.end()
#define col(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())
#define vec vector
#define deq deque
#define hmap unordered_map
#define pq priority_queue
#define fn function
#ifdef LOCAL
#define git stauDBG_MACRO_NO_WARNING
#include <dbg.h>
#define dbgt dbg(dbg::time())
#else
#define dbg(...)
#define dbgt
#endif
typedef string str;
typedef int32_t i3;
typedef int64_t i6;
typedef int64_t i64;
typedef uint32_t u3;
typedef uint64_t u6;
typedef long double d6;
typedef pair<i6, i6> p6;
typedef vec<i6> vi6;
typedef vec<p6> vp6;
typedef vec<bool> vb;
typedef vec<vi6> vv;
typedef deq<p6> dp6;
typedef deq<i6> di6;
typedef map<i6, i6> mi6;
typedef map<p6, i6> mp6;
typedef set<i6> si6;
typedef hmap<i6, i6> hi6;
typedef vv graph;
typedef vv matrix;

const d6 EPS = 1 / 1000000.0;
const i6 INF = INT64_MAX / 4;
const i6 NINF = -INF;
const i6 ZERO = 0;
const i6 ONE = 1;

#endif

vi6 primes;

void ert() {
    vec<bool>sieve(1260,true);
    sieve[0] = false;
    sieve [1] = false;

    for(int i = 2; i < sieve.size(); i++) {
        if(sieve[i]) {
            primes.push_back(i);
            for(int j = i * i; j < sieve.size(); j += i) {
                sieve[j] = false;
            }
        }

    }
}


void prime_f(i6 a, mi6& res) {
    for(auto p: primes) {
        if(a% p == 0) {
            int cnt = 0;
            while(a % p == 0) {
                cnt += 1;
                a/=p;
            }
            res[p] = cnt;
            if(a > 1) {
                prime_f(a, res);
                a=1;
            }
            break;
        }
    }
    if(a != 1) {
        for(int i = 1261; i*i <= a; i+=2) {
            if(a % i == 0) {
                if(i*i != a) {
                    res[i] = 1;
                    res[a / i] = 1;
                } else {
                    res[i] = 2;
                }
                a = 1;
                break;
            }
        }
        if(a != 1) {
            res[a] = 1;
        }
    }
}

i6 div_cnt(i6 a) {
    i6 r =1;
    i6 org =a;
    for(auto p: primes) {
        if(p >a) {
            break;
        }
        if(a% p == 0) {
            int cnt = 0;
            while(a % p == 0) {
                cnt += 1;
                a/=p;
            }
            r*=(cnt+1);
        }
    }
    if(a >1) {
        for(int i = 1261; i*i <= a; i+=2) {
            if(a % i == 0) {
                if(i*i != a) {
                    r*=4;
                } else {
                    r*=3;
                }
                a = 1;
                break;
            }
        }
    }
    if(a != 1) {
        r*=2;
    }
    return r;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ifstream cin{"forta.in"};
    ofstream cout{"forta.out"};

    ert();
    i6 c;
    cin >> c;

    i6 n;
    cin >> n;

    vec<i6>nr;
    vec<i6>d(n);
    for(int i = 0; i < n; i++) {
        i6 a;
        cin >> a;
        nr.push_back(a);
        //clock_t time_req= clock();
//        mi6 f;
//        prime_f(a,f);
//        i6 s  = 1;
//        for(auto kv : f) {
//            s*= (kv.second +1);
//
//        }
        d[i] = div_cnt(a);
        //time_req = clock() - time_req;
        //cout << "Div count for " <<a<<":"<< time_req/1000.0 << " msecs" << endl;
    }
    if(c == 1) {
        int mf = 0;
        int mn = 0;

        for(int i = 0; i < n; i++) {
            if(mf < d[i]) {
                mf = d[i];
                mn = nr[i];
            } else {
                if(mf == d[i] && mn > nr[i] && mn != 0) {
                    mn = nr[i];
                }
            }
        }
        cout << mn << endl;
    } else {
        srt(d);
        i6 r = 1;
        i6 fr = 1;
        for(int i = 1; i < n; i++) {
            if(d[i] == d[i-1]) {
                r++;
            } else {
                r = 1;
            }
            if(fr < r) {
                fr = r;
            }
        }

        cout << fr <<endl;
    }
    return 0;
}
