#include<iostream>

using namespace std;

char s[110];
int cnt;

int main(){
    cin >> s;
    for (int i = 0;s[i]; i++)
    {
        if(s[i] == 'A') cnt++;
    }
    cout << cnt;
    return 0;
}