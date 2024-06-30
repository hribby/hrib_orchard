#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

struct road{
    i64 x = 0, dist = 0, cost = 0;
};

i64 n;
vector<vector<road>> g;

i64 max_leaf[100001];
i64 add[100001];
void dfs(i64 idx, i64 p, i64 cp){
    for(auto& e : g[idx]){
        if(e.x == p){
            continue;
        }

        dfs(e.x, idx, e.cost);
        max_leaf[idx] = max(max_leaf[idx], max_leaf[e.x] + e.dist);
        add[idx] += add[e.x];
    }

    add[idx] = min(add[idx], cp);
    if(g[idx].size() == 1){ // it is a leaf
        add[idx] = cp;
    }
}

i64 dp[100001];
void solve(i64 idx, i64 p){
    for(auto& e : g[idx]){
        if(e.x == p){
            continue;
        }

        solve(e.x, idx);
        dp[idx] += dp[e.x] + (max_leaf[idx] - (max_leaf[e.x] + e.dist)) * add[e.x];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ifstream cin{"arb2.in"};
    ofstream cout{"arb2.out"};

    cin >> n;
    g.assign(n + 1, {});
    road tmp;
    i64 x;
    for(i64 i = 0; i < n - 1; i++){
        cin >> x >> tmp.x >> tmp.dist >> tmp.cost;
        g[x].push_back(tmp);
        swap(x, tmp.x);
        g[x].push_back(tmp);
    }

    /// calculate max_leaf and add
    dfs(1, -1, LLONG_MAX);

//    for(i64 i = 1; i <= n; i++){
//        cout << i << endl << "add: " << add[i] << endl << "max_leaf: " << max_leaf[i] << endl << endl;
//    }

    ///solve
    solve(1, -1);

    cout << dp[1];

    return 0;
}
