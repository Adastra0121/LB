#include<bits/stdc++.h>

using namespace std;

string s[110];
int n;

int main(){
    cin >> n,getline(cin,s[0]);
    for (int i = 1; i <= n; i++) getline(cin,s[i]);
    for (int i = n; i > 0 ; i--) cout << s[i] << endl;
    return 0;
}