#include<iostream>

using namespace std;

char s[210];
int ans;

int main(){
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        ans += s[i] - '0';
    }
    cout << ans << endl;
    return 0;
}