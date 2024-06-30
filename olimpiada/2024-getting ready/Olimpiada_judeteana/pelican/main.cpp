#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    //ifstream cin("pelican.in");
    //ofstream cout("pelican.out");
    int n,p,k;
    cin>>n>>p>>k;
    vector<int>v;
    for(int i = 0; i<p; i++) {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
    }
    vector<pair<char,int>>comands;
    char x;
    cin>>x;
    int y;
    cin>>y;

    int before = y;
    char bef = x;
    for(int i = 0; i<k-1; i++) {
        cin>>x;
        cin>>y;
        bool okay = false;
        if(x == bef) {
            before+=y;
        } else {
            comands.push_back(make_pair(bef,before));
            before = y;
            bef = x;
            okay = true;
        }
        if(i == k-2 && okay == false){
            comands.push_back(make_pair(bef,before));
        }
    }
    vector<int>duck_1;
    duck_1.push_back(v[0]);
    duck_1.push_back(v[1]);
    duck_1.push_back(v[2]);
    vector<int>c1(5,0);
    vector<int>c2(5,0);
    vector<int>c3(5,0);
    vector<int>c4(5,0);
    int nustiu = comands.size();
    for(int i = 0; i< comands.size(); i++) {
        if(comands[i].first == 'A') {
            if(duck_1[2] == 1) {
                c1[1]+=comands[i].second;
                c2[2]+=comands[i].second;
                c3[3]+=comands[i].second;
                c4[4]+=comands[i].second;

                duck_1[1]=duck_1[1]-comands[i].second;
                if(duck_1[1] < 0) {
                    duck_1[1] = n% (duck_1[1]*-1) ;
                }
            } else if(duck_1[2] == 2) {
                c1[2]+=comands[i].second;
                c2[3]+=comands[i].second;
                c3[4]+=comands[i].second;
                c4[1]+=comands[i].second;
                duck_1[0] = duck_1[0]+comands[i].second;
                if(duck_1[0] > n -1) {
                    duck_1[0] = n-duck_1[0];
                }
            } else if(duck_1[2] == 3) {
                c1[3]+=comands[i].second;
                c2[4]+=comands[i].second;
                c3[1]+=comands[i].second;
                c4[2]+=comands[i].second;

                duck_1[1] = duck_1[1]+comands[i].second;
                if(duck_1[1] > n - 1) {
                    duck_1[1] = n-duck_1[1];
                }
            } else {
                c1[4]+=comands[i].second;
                c2[1]+=comands[i].second;
                c3[2]+=comands[i].second;
                c4[3]+=comands[i].second;
                duck_1[0]=duck_1[0]-comands[i].second;
                if(duck_1[0] < 0) {

                    duck_1[0] = n% (duck_1[0]*-1) ;
                }
            }
        } else {
            duck_1[2] = comands[i].second +  duck_1[2];
            if(duck_1[2]>4) {
                duck_1[2] =duck_1[2] %4;
            }

        }
    }

    for(int i = 3; i<p*3; i+=3) {
        if(v[i+2] == 1) {
            v[i+1]=v[i+1] - c1[1];
            if(v[i+1] < 0) {
                v[i+1] = n% (v[i+1]*-1) ;
            }
            v[i]=v[i]-(n%c1[3]);
            if(v[i] < 0) {
                v[i] = n% (v[i]*-1) ;
            }
            v[i] = v[i]+c1[2];
            if(v[i] > n - 1) {
                v[i] = n-v[1];
            }
            v[i+1] = v[i+1]+n%c1[4];
            if(v[i+1] > n-1) {
                v[i+1] = n-v[1];
            }




        } else if(v[2] == 2) {
            v[i+1]=v[i+1]-c2[1];
            if(v[i+1] < 0) {
             v[i+1] = n% (v[i+1]*-1) ;
            }
            v[i]=v[i]-c2[3];
            if(v[i] < 0) {
                v[i] = n% (v[i]*-1) ;
            }
            v[i] = v[i]+(n%c2[2]);
            if(v[i] > n-1) {
                v[i] = n-v[1];
            }
            v[i+1] = v[i+1]+(n%c2[4]);
            if(v[i+1] > n-1) {
                v[i+1] = n-v[1];
            }
        } else if(v[2] == 3) {
            v[i+1]=v[i+1]-c3[1];
            if(v[i+1] < 0) {
             v[i+1] = n% (v[i+1]*-1) ;
            }
            v[i]=v[i]-(n%c3[3]);
            if(v[i] < 0) {

                v[i] = n% (v[i]*-1) ;
            }
            v[i] = v[i]+(n%c3[2]);
            if(v[i] > n-1) {
                v[i] = n-v[1];
            }
            v[i+1] = v[i+1]+(n%c3[4]);
            if(v[i+1] > n-1) {
                v[i+1] = n-v[1];
            }
        } else {
            v[i+1]=v[i+1]-c4[1];
            if(v[i+1] < 0) {
                v[i+1] = n% (v[i+1]*-1) ;
            }
            v[i]=v[i]-c4[3];
            if(v[i] < 0) {
                v[i] = n% (v[i]*-1) ;
            }
            v[i] = v[i]+(n%c4[2]);
            if(v[i] > n-1) {
                v[i] = n-v[1];
            }
            v[i+1] = v[i+1]+(n%c4[4]);
            if(v[i+1] > n-1) {
                v[i+1] = n-v[1];
            }
        }
    }


    cout<<"Evrica"<<endl;
    return 0;
}
