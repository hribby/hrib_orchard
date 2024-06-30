#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll=long long;

int main()
{
        //ifstream cin ("hibrid.in");
        //ofstream cout ("hibrid.out");
        ll cerinta;
        ll P, N;
        cin >> cerinta;
        cin >> P >> N;
        vector <pair<ll,ll>> pt;
        vector <ll> vcord;
        vector <ll> va(P,0);
        for(int i=0; i<P; i++){
            ll st1, dr1, c1;
            cin >> st1 >> dr1 >> c1;
            pt.push_back(make_pair(st1,c1));
        }
        for(int i=0; i<N-1; i++){
            ll x1;
            cin >> x1;
            vcord.push_back(x1);
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<P; j++){
                if(vcord[i]>pt[j].first && vcord[i+1]<pt[j].first){
                    va[j]++;
                } else if(vcord[i]<pt[j].first && vcord[i+1]>pt[j].first){
                    va[j]++;
                }
            }
        }
        int cmmp=-1;
        int cm;
        ll txaa=0;
        for(int i=0; i<P; i++){
            if(va[i]>cmmp){
                cmmp=va[i];
                cm=i +1;
            }
            txaa+=i*pt[i].second;
        }
        if(cerinta == 1){
            cout << cm;
        } else {
            cout << txaa;
        }

    return 0;
}
