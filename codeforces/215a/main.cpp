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

    int n;
    cin >> n;

    vec<i6> vn;
    for(i6 i = 0; i < n; i++) {
        i6 a;
        cin >> a;
        vn.push_back(a);
    }

    int m;
    cin >> m;

    vec<i6> vm;
    for(i6 i = 0; i < m; i++) {
        i6 a;
        cin >> a;
        vm.push_back(a);
    }
    i6 y = 0;

    vec<i6>vr;
    for(i6 j = 0; j < n; j++) {
        bool ok = false;
        for(i6 i = 0; i < m; i++) {
            if(vm[i] % vn[j] == 0 && vm[i] / vn[j] >= y) {
                y = vm[i] / vn[j];
                vr.push_back(y);
            }
        }

    }
   sort(vr.begin(),vr.end());
   i6 res = 0;
   for(i6 i = 0;i < vr.size();i++){
       if(vr[i] == vr[vr.size()]){
          res++;
       }
   }
 cout << res <<endl;

return 0;
}
