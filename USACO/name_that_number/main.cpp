/*
ID: anndree1
LANG: C++
TASK: namenum
*/
#include <bits/stdc++.h>

using namespace std;
ifstream fin("namenum.in");
ofstream fout("namenum.out");
vector<string>v(10);
set<string>names;
bool okay = false;

void solve(long long poz,vector<int> &num, string &res) {
    if(poz == num.size()) {
        int ct =names.count(res);
        if(ct > 0) {
            fout<<res<<endl;
            okay = true;
        }
        return ;
    }
    if(num[poz] < 2){
        solve(poz+1,num,res);
    }
    for(char e:v[num[poz]]) {
        res.push_back(e);
        solve(poz+1,num,res);
        res.pop_back();
    }
}


int main() {

    v[2] = "ABC";
    v[3] = "DEF";
    v[4] = "GHI";
    v[5] = "JKL";
    v[6] = "MNO";
    v[7] = "PRS";
    v[8] = "TUV";
    v[9] = "WXY";
    ifstream din("dict.txt");

    string crt;
    while(din>>crt) {
        names.insert(crt);
    }
    long long n;
    fin>>n;
    vector<int>num;
    while(n > 0) {
        num.push_back(n % 10);
        n /= 10;
    }
    reverse(num.begin(),num.end());
    string res;
    solve(0,num,res);

    if(!okay) {
        fout<<"NONE"<<endl;
    }

    return 0;
}
