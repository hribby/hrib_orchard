#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
typedef uint64_t u64;



void solve(i64 n, map<i64,i64>& res){
    for(i64 i=2;i*i<=n;i++){
        i64 cnt=0;
        while(n % i ==0){
            cnt+=1;
            n/=i;
        }
        if(cnt >0){
            res[i]+=cnt;
        }
    }
    if(n >1){
         res[n]+=1;
    }
}

const vector<i64> ld2 ={6,2,4,8};

const vector<i64> ld3 ={1,3,9,7};

const vector<i64> ld7 ={1,7,9,3};

const vector<i64> ld9 ={1,9};

int last_digit(i64 n, i64 p){
    i64 ld = n % 10;
    if(ld ==1){
        return 1;
    }
    if(ld ==2){
        return ld2[p%4];
    }
    if(ld ==3){
        return ld3[p%4];
    }
    if(ld ==5){
        return 5;
    }
    if(ld ==7){
        return ld7[p%4];
    }
    if(ld ==9){
        return ld9[p%2];
    }
}

int main()
{
    ifstream cin("cifre8.in");
    ofstream cout("cifre8.out");
    i64 n;
    cin>>n;
    map<i64,i64>f;
    for(int i=0;i<n;i++){
        i64 a;
        cin>>a;
        solve(a,f);
    }
    auto r1=min(f[2],f[5]);
    f[2]-=r1;
    f[5]-=r1;
    i64 r2=1;
    for(auto kv:f){
        if(kv.second != 0){
            r2*=last_digit(kv.first,kv.second);
            r2 = r2%10;
        }
    }
    cout <<r1 <<" "<<r2<<endl;
    return 0;
}
