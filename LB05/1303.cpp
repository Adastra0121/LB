#include<iostream>
#include<cstring>
using namespace std;

char s[1010];

int main(){
    cin >> s;
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}