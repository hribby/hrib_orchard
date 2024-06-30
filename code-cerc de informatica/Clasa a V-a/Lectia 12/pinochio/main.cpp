#include <iostream>

using namespace std;

int main() {
    int y;
    cin>>y;

    int n;
    cin>>n;



    if(y<7) {
        if(y==1) {
            cout << "1" << endl;
            return 0;

        }
        if(y==2) {
            cout << "2" << endl;
            return 0;
        }
        if(y==3) {
            cout << "3" << endl;
            return 0;
        }
        if(y==4) {
            cout << "4" << endl;
            return 0;
        }
        if(y==5) {
            cout << "5" << endl;
            return 0;
        }
        if(y==6) {
            cout << "4" << endl;
            return 0;
        }
        if(y==0) {
            cout << "0" << endl;
            return 0;
        }
    }

    if(y % 7==0) {
        for(int i =0; i<y; i+7) {
            n+=3;
        }
    } else {
        for(int j =0; j<y; j++) {
            if(j%7==6) {
                n+=4;
            }
            if(j%7==5) {
                n+=5;
            }
            if(j%7==4) {
                n+=4;
            }
            if(j%7==3) {
                n+=3;
            }
            if(j%7==2) {
                n+=2;
            }
            if(j%7==1) {
                n+=1;
            }
        }


        cout << n << endl;
        return 0;
    }
