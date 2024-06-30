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
#define sz(x) (int) x.size()
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
typedef pair<int, int> p6;
typedef vec<int> vi6;
typedef vec<p6> vp6;
typedef vec<bool> vb;
typedef vec<vi6> vv;
typedef deq<p6> dp6;
typedef deq<int> di6;
typedef map<int, int> mi6;
typedef map<p6, int> mp6;
typedef set<int> si6;
typedef hmap<int, int> hi6;
typedef vv graph;
typedef vv matrix;

const d6 EPS = 1 / 1000000.0;
const int INF = INT64_MAX / 4;
const int NINF = -INF;
const int ZERO = 0;
const int ONE = 1;

#endif

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;

    string s;
    cin >> s;

    map<char,int> m;

    for(int i =0; i < s.size(); i++) {
        bool f = false;
        m[s[i]]+=1;
    }
    i6 ok = true;
    for(auto kv : m) {
        if(kv.sd % k != 0) {
            cout<< "-1" <<endl;
            ok = false;
            break;
        }
    }
    if(ok) {
        string pt;
        for(auto kv : m) {
            i6 times = kv.sd/k;
            for(int i=0; i<times; i++) {
                pt.push_back(kv.ft);
            }
        }
        for(i6 i=0;i < k;i++){
            cout<<pt;
        }

    }

    return 0;
}
