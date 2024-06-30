/*
    __  ___        __
   /  |/  /____   / /_ ____   _____ ____ _ _____
  / /|_/ // __ \ / __// __ \ / ___// __ `// ___/
 / /  / // /_/ // /_ / /_/ // /   / /_/ /(__  )
/_/  /_/ \____/ \__/ \____//_/    \__,_//____/
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

hi6 dst;

void compact(i6 crt,const vec<vec<p6>>& g, vec<unordered_set<i3>>& o) {
    for(auto& c : g[crt] ) {
        i6 cn = c.ft;
        i6 cw = c.sd;
        for(auto& c1 : g[cn] ) {
            if(c1.ft != crt){
                i6 cn1 = c1.ft;
                i6 cw1 = c1.sd;
                i6 delta = (cw+cw1)*(cw+cw1);
                i6 key = (max(crt,cn1)) <<32 |(min(crt,cn1));
                auto fd = dst.find(key);
                if(fd != dst.end()){
                    fd->sd = min(fd->sd,delta);
                }else{
                    dst.insert({key,delta});
                }
                o[crt].insert(cn1);
                o[cn1].insert(crt);
            }
        }
    }
}


vp6 dij(i6 s, const vec<unordered_set<i3>>& g) {
    vp6 ans(g.size() + 1, {INF, -1});
    pq<p6, vp6, greater<p6>> q;
    ans[s] = {0, -1};
    q.emplace(0, s);
    while (!q.empty()) {
        p6 p = q.top();
        q.pop();
        i6 dist = p.first;
        i6 node = p.second;
        if (dist > ans[node].ft) {
            continue;
        }
        for (auto& c : g[node]) {
            i6 key = (max(node,(i6)c)) <<32 |(min(node,(i6)c));
            i6 cand =  dist + dst[key];
            if (cand < ans[c].ft) {
                ans[c] = {cand, node};
                q.emplace(cand, c);
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    ifstream cin {"input.txt"};
    ofstream cout{"output.txt"};
#endif
    i6 n, m;
    cin >> n >> m;
    vec<vec<p6>> g(n + 1, vec<p6>());

    for (i6 i = 0; i < m; i++) {
        i6 a, b, w;
        cin >> a >> b >> w;
        g[a].emplace_back(b,w);
        g[b].emplace_back(a,w);
    }
    //vec<vec<p6>> ng(n + 1, vec<p6>());
    vec<unordered_set<i3>> ng(n+1, unordered_set<i3>());
    for(i6 i=1; i<=n; i++) {
        //if(!vis[i]) {
            compact(i,g,ng);
        //}
    }
//    for(auto& e :ng ){
//        cout<<"Line: ";
//        for(auto &  ee :e){
//            cout<<"{" << ee.ft<<" "<<ee.sd<<"}, ";
//        }
//        cout<<endl;
//    }
    auto ans = dij(1, ng);
    for(i6 i=1; i<=n; i++) {
        cout << (ans[i].ft >= INF ? -1 : ans[i].ft) <<" ";
    }
    cout<<endl;
    return 0;
}
