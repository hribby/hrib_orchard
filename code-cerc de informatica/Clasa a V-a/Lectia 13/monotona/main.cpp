#include <iostream>
#include <fstream>
using namespace std;

/*
int main1()

{
    ifstream cin("monotona.in");
    ofstream cout("monotona.out");
    int n;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int l=v.size();
    bool b=true;
    for(int j=1; j<l; j++)
    {
        if(v[j]<v[j-1])
        {
            b=false;
            break;
        }
    }
    if(b==true)
    {
        cout<<"da"<<endl;
        return 0;
    }
    b=true;
    for(int k=1; k<l; k++)
    {
        if(v[k]>v[k-1])
        {
            b=false;
            break;
        }


    }
    if(b==true)
    {
        cout<<"da"<<endl;
    }
    else
    {
        cout<<"nu"<<endl;

    }
    return 0;
}
*/
int main()

{
    ifstream cin("monotona.in");
    ofstream cout("monotona.out");
    int n;
    cin>>n;

    int a;
    cin>>a;
    bool c = true;
    bool d = true;
    for(int i=1; i<n; i++)
    {
        int b;
        cin>>b;
        if(c){
            if(b < a){
                   c = false;
            }
        }
        if(d){
            if(b >a){
                d = false;
            }
        }
        a = b;
    }

    if(c || d)
    {
        cout<<"da";
    }

    else
    {
        cout<<"nu";

    }
    return 0;
}
