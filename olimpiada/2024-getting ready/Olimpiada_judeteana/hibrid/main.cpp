#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
//    ifstream cin("hibrid.in");
//    ofstream cout ("hibrid.out");
    int c,p,n;
    cin>>c>>p>>n;

    vector<int>tp;
    map<int,int>tax;
    map<int,int>ordine;
    for(int i = 0; i<p; i++) {
        int x;
        cin>>x;
        int gh = x;
        ordine[x] = i;
        tp.push_back(x);
        cin>>x;
        cin>>x;
        tax[gh]=x;
    }
    vector<int>open;
    vector<int>close;
    int d;
    cin>>d;
    for(int i = 0; i<n-1; i++) {
        int x;
        cin>>x;
        open.push_back(min(d,x));
        close.push_back(max(d,x));
        d = x;
    }
    sort(open.begin(),open.end());
    sort(close.begin(),close.end());
    sort(tp.begin(),tp.end());
    open.push_back(1e9);
    int open_count = 0;
    int close_count = 0;
    long long open_close_count = 0;
    long long tax_count = 0;
    long long tx = 0;
    map<int,long long>res;
    bool okay = true;
    while(close_count<n-1 && okay == true) {
        if(tp[tax_count]<close[close_count] && tp[tax_count]<open[open_count]) {
            int nms = tp[tax_count];
            res[ordine[nms]]+=open_close_count;
            tx += tax[tp[tax_count]] * open_close_count;
            tax_count++;
            if(tax_count == p) {
                okay = false;
            }
        } else if(tp[tax_count]>close[close_count] && close[close_count]<open[open_count]) {
            open_close_count--;
            close_count++;
        } else {
            open_close_count++;
            open_count++;
        }

    }
    long long big = 0;
    int fnl = 0;


    if(c==1) {
        for(int i = 0; i<p; i++) {
            if(big<res[i]) {
                fnl = i+1;
                big = res[i];
            }
        }
        if(big == 0){
            cout<<"-1"<<endl;
        }else{
            cout<<fnl<<endl;
        }

    } else {
        cout<<tx<<endl;
    }

    return 0;
}
