#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    vector<int>v1(n/2);
    vector<int>v2(n/2);
    for(int i = 0;i<n/2;i++){
        cin>>v1[i];
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int resf = 1e9;
    int pf = 0;
    for(int i = 1;i<=h;i++){
        int l1 = 0;
        int r1 = v1.size()-1;
        int res = 0;
        int mx1 = v1.size();
        while(l1<=r1){
            int mid  = l1+(r1-l1)/2;
            if(v1[mid]>=i ){
                r1 = mid -1;
                mx1 = mid;
            }else{
                l1 = mid+1;
            }
        }
        int l2 = 0;
        int r2 = v2.size()-1;
        int mx2 = v2.size();
        while(l2<=r2){
            int mid  = l2+(r2-l2)/2;
              if(v2[mid]>= h - i + 1 ){
                r2 = mid-1;
                mx2 = mid;
            }else{
                l2 = mid+1;
            }
        }
        res =  n - mx1 - mx2;
        if(res < resf){
            resf = res;
            pf = 1;
        }else if(res == resf){
           pf++;
        }

    }
    cout<<resf<<" "<<pf<<endl;
    return 0;
}
