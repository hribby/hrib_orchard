#include <bits/stdc++.h>

using namespace std;

struct Event {
    bool girl;
    bool entry;
    int time;
};

pair<int, int> c1(vector<Event>&evs) {
    pair<int,int> res = {0,0};
    for(auto& ev : evs) {
        if(ev.girl) {
            if(ev.entry) {
                res.second+=1;
            } else {
                res.second-=1;
            }
        } else {
            res.first+= (ev.entry)?1:-1;
        }
    }
    return res;
}

int c2(vector<Event>&evs) {
    int tot = 0;
    int eq_since =-1;
    pair<int,int> res = {0,0};
    for(auto& ev : evs) {
        if(ev.girl) {
            if(ev.entry) {
                res.second+=1;
            } else {
                res.second-=1;
            }
        } else {
            res.first+= (ev.entry)?1:-1;
        }
        if(res.first == res.second && res.first !=0) {
            eq_since=ev.time;
        } else {
            if(eq_since != -1) {
                tot+= ev.time -eq_since;
                eq_since =-1;
            }
        }
    }

    return tot;
}

int c3(vector<Event>&evs) {
    int tot = 0;
    int eq_since =-1;
    pair<int,int> res = {0,0};
    for(auto& ev : evs) {
        if(ev.girl) {
            if(ev.entry) {
                res.second+=1;
            } else {
                res.second-=1;
            }
        } else {
            res.first+= (ev.entry)?1:-1;
        }
        if(eq_since != -1) {
            if(res.first % 2 == 0) {
                tot=max(tot, ev.time -eq_since);
                eq_since =-1;
            }
        } else {
            if(res.first % 2 == 1 ) {
                eq_since=ev.time;
            }
        }
    }
    if(res.first % 2 == 1 ) {
        tot=max(tot,(evs.back().time-eq_since));
    }

    return tot;
}


int main() {
    int c;
    cin >> c;

    int n;
    cin >> n;

    vector<Event>evs;


    for(int i = 0; i < n; i++) {
        char a;
        cin >> a;

        char b;
        cin >> b;

        int x;
        cin >> x;

        int d;
        cin >> d;

        int e;
        cin >> e;

        Event crt_ev{a=='f',b=='i', x*3600+d*60+e};
        evs.push_back(crt_ev);
    }
    if(c == 1) {
        auto ans = c1(evs);
        cout<<ans.first<<" "<< ans.second<<endl;
    } else    if(c == 2) {
        auto ans = c2(evs);
        cout<<ans<<endl;
    } else {
        auto ans = c3(evs);
        cout<<ans<<endl;
    }
    return 0;
}
