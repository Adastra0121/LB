#include<bits/stdc++.h>

using namespace std;

int main(){
    char c;
    string s,s1, s2;
    int pos,len,p;
    cin >> c;
    switch (c)
    {
    case 'l':
        cin >> s;
        cout << s.length();
        break;
    case 's':
        cin >> s >> pos >> len;
        cout << s.substr(pos,len);
        break;
    case 'i':
        cin >> s1 >> s2 >> pos;
        s1.insert(pos,s2);
        cout << s1;
        break;
    case 'e':
        cin >> s >> pos >> len;
        s.erase(pos,len);
        cout << s;
        break;
    case 'f':
        cin >> s1 >> s2;
        p = s1.find(s2);
        cout << p;
        break;
    default:
        cin >> s1 >> s2 >> pos >> len;
        s1.replace(pos,len,s2);
        cout << s1;
        break;
    }
    return 0;
}