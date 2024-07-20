#include<bits/stdc++.h>

using namespace std;

string a;
int b;

int main(){
    cin >> a >> b;
    int len = a.length();
    for (int i = 1; i < len; i++)
    {
        cout << '9';
    }
    cout << '8';
    for (int i = 1; i < len; i++)
    {
        cout << '0';
    }
    cout << char('1' + b);
    return 0;
}