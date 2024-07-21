#include<iostream>
#include<algorithm>
using namespace std;
int n, flag;
string s[110];

int main(){
    cin >> n,getline(cin,s[0]);
    for (int i = 1; i <= n; i++) getline(cin,s[i]);
    for (int i = 1; i <= n; i++){
        flag = 0;
        for (int j = 0; s[i][j]; j++)
        {
            if (s[i][j]=='x'||s[i][j]=='X') {
                s[i][j] = ' ';
                flag = 1;
            }
        }
        if(flag) s[i].insert(s[i].size(),"Yes");
        else s[i].insert(s[i].size(),"No");
    }
    sort(s+1,s+n+1);
    for (int i = 1; i <= n; i++) cout << s[i] << endl;
    return 0;
}