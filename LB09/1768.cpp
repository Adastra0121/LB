#include<bits/stdc++.h>
using namespace std;
int s[200], f;
string c;
int main(){
    char x;
    while(cin >> x)  s[x]++, c += x;
    for(int i = 0; c[i]; i++)
        if(s[c[i]] == 1){
            f = 1, cout << c[i];
            break;
        }
    if(!f) cout << "no";
    return 0;
}