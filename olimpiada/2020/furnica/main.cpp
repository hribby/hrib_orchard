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
#define sd second
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ifstream cin{"furnica.in"};
    ofstream cout{"furnica.out"};

    i6 c;
    cin >> c;

    i6 n;
    cin >> n;

    if(c == 1) {
        i6 w1 = 0;
        i6 l1 = 0;
        i6 r1 = 0;

        for(int i = 0; i < n; i++) {
            i6 w2;
            cin >> w2;

            i6 l2;
            cin >> l2;
            if(i > 0) {
                if(l2 > l1) {
                    r1 += ((l2 - l1) * 5);
                } else if(l2 < l1) {
                    r1 += ((l1 - l2) * 2);
                }
            } else {
                r1 += (l2 * 5);
            }
            r1 += (w2 * 3);
            w1 = w2;
            l1 = l2;
        }
        r1 += (l1 * 2);
        cout << r1 <<endl;

    } else if( c == 2) {
        i6 w1 = 0;
        i6 l1 = 0;
        i6 r2 = 0;
        i6 r22 = 0;
        for(int i = 0; i < n; i++) {
            i6 w2;
            cin >> w2;

            i6 l2;
            cin >> l2;
            if(l1 > l2) {
                r22 = w2;
            } else if(l1 == l2) {
                r22 += w2;
            } else if(l1 < l2) {
                r22 += l2 - l1 + w2;
            }

            w1 = w2;
            l1 = l2;
            r2 = max(r2, r22);
        }
        cout << r2 <<endl;
    } else if(c == 3) {

        i6 w1 = 0;
        i6 l1 = 0;
        int t;
        cin >> t;
        vi6 v(n);

        for(int i = 0; i < n; i++) {
            i6 r1 = 0;
            i6 w2;
            cin >> w2;

            i6 l2;
            cin >> l2;
            if(i > 0) {
                if(l2 > l1) {
                    r1 += ((l2 - l1) * 5);
                } else if(l2 < l1) {
                    v[i-1] += ((l1 - l2) * 2);
                }
            } else {
                r1 += (l2 * 5);
            }
            r1 += (w2 * 3);
            w1 = w2;
            l1 = l2;
            v[i] = r1;
        }
        v[n-1] += l1*2;
        i6 f = -1;
        i6 m = 0;
        for(int i = 0; i < n; i++) {
            if(m + v[i] < t) {
                m += v[i];
            } else {
                f = i+1;
                break;
            }
        }
        cout << f <<endl;

    }
    return 0;
}
