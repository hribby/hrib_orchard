#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long c;
    while(true) {
        cin>>c;
        if(c == 0) {
            break;
        }
        stack<long long>s1;
        stack<long long>s2;
        bool okay = false;
        for(long long i = 0; i<c; i++) {
            string s;
            cin>>s;
            long long a;
            cin>>a;

            if(s  == "DROP") {
                s2.push(a);
                cout<<"DROP 2"<<" "<<a<<endl;
                okay = true;
            } else {
                if(s1.size() == 0 && okay == true) {
                    long long y = 0;
                    while(s2.size() > 0) {
                        y+=s2.top();
                        s1.push(s2.top());
                        s2.pop();

                    }
                    cout<<"MOVE 2->1 "<<y<<endl;
                    okay = false;
                }
                bool change = false;
                long long a2 = a;
                while(a >0) {
                    if(s1.size() >0) {
                        if(s1.top() >= a) {
                            s1.top() = s1.top() - a;
                            if(s1.top() == 0) {
                                s1.pop();
                            }
                            a = 0;
                        } else {
                            a = a-s1.top();
                            s1.pop();
                        }
                    } else {
                        change = true;
                        cout<<"TAKE 1 "<<a2-a<<endl;
                        long long y = 0;
                    while(s2.size() > 0) {
                        y+=s2.top();
                        s1.push(s2.top());
                        s2.pop();

                    }
                    cout<<"MOVE 2->1 "<<y<<endl;
                    cout<<"TAKE 1 "<<a<<endl;
                    }

                }
                 if(!change) {
                cout<<"TAKE 1 "<<a2<<endl;
            }

            }

        }
        cout<<endl;


    }



    return 0;
}
