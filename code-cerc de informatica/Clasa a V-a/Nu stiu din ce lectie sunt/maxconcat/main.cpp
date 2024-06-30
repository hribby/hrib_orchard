#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    int mx=0;
    int b=0;
    int usless=0;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i=0; i<n; i++) {
        if(v[i]%2==0) {
           usless=1;
        }else{
           if(v[i]>mx) {
                mx=v[i];
                b=v[i+1];
            }
        }
    }
    cout << mx<< b << endl;
    return 0;
}
