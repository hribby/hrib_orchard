#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<string>>white(6);
    vector<vector<string>>black(6);
    int b = 57;
    for(int i = 0; i<17; i++) {
        string s;
        cin>>s;
        if(i % 2 != 0) {
            int a = 96;
            b--;
            for(int j = 0; j<33; j++) {
                if(s[j] == '|') {
                    a++;
                }
                if(int(s[j]) >= 65 && int(s[j]) <= 90) {
                    string res;
                    if(s[j] == 'P') {
                        res.push_back(char(a));
                        res.push_back(char(b));
                        white[5].push_back(res);
                    }
                    res.push_back(s[j]);
                    res.push_back(char(a));
                    res.push_back(char(b));

                    if(s[j] == 'K') {
                        white[0].push_back(res);
                    } else if(s[j] == 'Q') {
                        white[1].push_back(res);
                    } else if(s[j] == 'R') {
                        white[2].push_back(res);
                    } else if(s[j] == 'B') {
                        white[3].push_back(res);
                    } else if(s[j] == 'N') {
                        white[4].push_back(res);
                    }
                }
                if(int(s[j]) >= 97 && int(s[j]) <= 122) {
                    string res;
                    if(toupper(s[j]) == 'P') {
                        res.push_back(char(a));
                        res.push_back(char(b));
                        black[5].push_back(res);

                    }
                    res.push_back(toupper(s[j]));
                    res.push_back(char(a));
                    res.push_back(char(b));
                    if(res[0] == 'K') {
                        black[0].push_back(res);
                    } else if(res[0] == 'Q') {
                        black[1].push_back(res);
                    } else if(res[0] == 'R') {
                        black[2].push_back(res);
                    } else if(res[0] == 'B') {
                        black[3].push_back(res);
                    } else if(res[0] == 'N') {
                        black[4].push_back(res);
                    }
                }

            }
        }
    }
    cout<<"White: ";
    for(int i = 0; i<white.size(); i++) {
         sort(v[i].begin(),v[i].end());
        for(int j = 0; j<white[i].size(); j++) {
            cout<<white[i][j]<<",";
        }

    }
    cout<<endl;
    cout<<"Black: ";
    for(int i = 0; i<black.size(); i++) {
         sort(v[i].begin(),v[i].end());
        for(int j = 0; j<black[i].size(); j++) {
            cout<<black[i][j]<<",";
        }

    }
    return 0;
}
