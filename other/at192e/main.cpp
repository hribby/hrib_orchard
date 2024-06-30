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

p6 dij_sd(i6 s, i6 d, const vec<vec<tuple<i6,i6,i6>>>& g) {
  vp6 ans(g.size() + 1, {INF, -1});
  pq<p6, vp6, greater<p6>> q;
  ans[s] = {0, -1};
  q.emplace(0, s);
  while (!q.empty()) {
    p6 p = q.top();
    q.pop();
    i6 dist = p.first;
    i6 node = p.second;
    if (node == d) {
      return {dist, node};
    }
    if (dist > ans[node].ft) {
      continue;
    }

    for (auto& c : g[node]) {
      i6 wait = dist % g2(c) == 0
                    ? 0
                    : g2(c) - (dist % g2(c));
      i6 cand = wait + dist + g1(c);
      if (cand < ans[g0(c)].ft) {
        ans[g0(c)] = {cand, node};
        q.emplace(cand, g0(c));
      }
    }
  }

  return {-1, -1};
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif
  i6 n, m, x, y;
  cin >> n >> m >> x >> y;
  vec<vec<tuple<i6,i6,i6>>> g(n + 1, vec<tuple<i6,i6,i6>>());

  for (i6 i = 0; i < m; i++) {
    i6 a, b, t, k;
    cin >> a >> b >> t >> k;
    g[a].emplace_back(b,t,k);
    g[b].emplace_back(a,t,k);
  }
  auto res = dij_sd(x, y, g);
  dbg(res);
  cout << res.ft << endl;
  return 0;
}
