#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("concurs.in");
    ofstream cout("concurs.out" );

    int h;
    cin>>h;

    int c=h/100;//city

    int s=h/10%10;//school


    int lo=0;//premii oras
    int ls=0;//premii scoala
    int n;
    cin>>n;
    bool found=false;

    for(int i=0; i<n; i++)
    {

        int a;
        cin >> a;

        if(a == h)
        {
            found = true;
        }
        if(a/100 == c)
        {
            lo += 1;
            if(a/10%10 == s)
            {
                ls += 1;
            }
        }
    }
    if(found == true)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
    cout << lo << endl;
    cout << ls << endl;



    return 0;
}
