#include<bits/stdc++.h>

using namespace std;

char c;
int s[30];

int main(){
    while (cin >> c)
    {
        s[int(c -'a'+1)]++;
    }
    for (int i = 1; i <= 26; i++)
    {
        // if(s[i]==1) {
        //     cout << char(i+'a'-1);
        //     return 0;
        // }
        cout << s[i] << endl;
    }
    cout << "no";
    return 0;
}