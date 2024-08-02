#include<bits/stdc++.h>
using namespace std;
string s[110];
int main(){
    string s1;
    while (getline(cin, s1))
    {
        string s2;
        int i = 0;
        stringstream ss(s1);
        while (ss >> s2)
        {
            s[++i] = s2;
        }
        for (int j = i; j ;j--) cout << s[j] << ' ';
        cout << endl;
    }
    return 0;
}