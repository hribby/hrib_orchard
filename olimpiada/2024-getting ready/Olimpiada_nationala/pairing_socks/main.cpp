#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    long long n;
    cin>>n;
    deque<long long>a(2*n);
    for(int i = 0;i<n*2;i++){
        cin>>a[i];
    }
    deque<long long>aux;
    int moves = 0;
    while(aux.size() >= 0 && a.size() > 0){

         if(aux.front() == a.front()){
            a.pop_front();
            aux.pop_front();
            moves++;
         }else{
         aux.push_front(a.front());
         a.pop_front();
         moves++;
         }
         if(aux.size() > 0 && a.size() == 0 ){
            cout<<"impossible"<<endl;
            return 0;
         }
         if(aux.size() == 0 && a.size() == 0){
            cout<<moves<<endl;
            return 0;
         }
    }
    return 0;
}
