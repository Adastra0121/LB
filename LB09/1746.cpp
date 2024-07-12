#include<bits/stdc++.h>

using namespace std;

int alphabet[30], cnt;
char c;

int main(){
    while (cin >> c)
    {
        alphabet[c-'a'+1]++;
    }
    for (int i = 1; i <= 26; i++)
    {
        if (cnt < alphabet[i]) {
            cnt = alphabet[i];
            c = char(i+'a'-1);
        }
    }
    cout << c << ' ' << cnt;
    return 0;
}