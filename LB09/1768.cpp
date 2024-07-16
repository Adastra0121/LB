#include<bits/stdc++.h>

using namespace std;

char c[100010];
int s[30];

int main(){
    cin >> c;
    for (int i = 1; c[i]; i++)
    {
        s[c[i]]++;
    }
    
    for (int i = 1; c[i]; i++)
    {
        if(s[c[i]]==1) {
            cout << c[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}