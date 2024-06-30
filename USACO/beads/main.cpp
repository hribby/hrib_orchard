/*
ID: anndree1
LANG: C++
TASK: beads
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("beads.in");
    ofstream cout("beads.out");
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<int,int>>v;
    int number = 0;
    int bw = 0;
    bool tr = false;
    while(s[bw] == 'w'){
        bw++;
    }
    int fw =0;
    char leter = s[bw];
    char fleter = s[bw];
    bool finish = false;
    for(int i = bw;i < n;i++){
        if(s[i] == leter){
            number++;
            number+=fw;
            fw = 0;
        }else if(s[i] == 'w'){
         fw++;
        }else if(i == n-1){
           if(s[i] == fleter){
             v[0].first += 1 + bw;
             tr = true;
           }
           finish = true;
             v.push_back(make_pair(number,fw));
        }else{
           v.push_back(make_pair(number,fw));
           leter = s[i];
           number = 1;
           fw = 0;
        }
    }

    if(!finish){
        if(leter == fleter && v.size() > 0){
             v[0].first += number + bw + fw;
             tr = true;
           }else{
           v.push_back(make_pair(number,fw));
           }
    }
     if(v.size() == 1 || v.size() == 2){
        cout<<n<<endl;
        return 0;
    }
    int res = v[0].first + v[0].second + v[1].first + v[1].second;
    int y = 0;
    if(!tr){
        res += bw;
        y+=bw;
    }
    int d = v.size();
    d-=2;
    y = v[0].first + v[0].second + v.back().first + v.back().second + v[d].second;
    res = max(res,y);
    for(int i = 2;i < v.size();i++){
        int x = v[i].first + v[i].second + v[i-1].first+v[i-1].second+v[i-2].second;
        res = max(res,x);
    }
    cout<<res<<endl;
    return 0;
}
