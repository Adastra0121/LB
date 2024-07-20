#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 2; s[i]; i++)
    {
        if(s[i]==s[i-2]&&s[i]==s[i-1]){
            string t(3,s[i]);
            int p = s.find(t);
            s.erase(p,3);
            i = p;
        }
    }
    cout << s;
    return 0;
}