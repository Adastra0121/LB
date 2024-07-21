#include<iostream>
using namespace std;
struct S
{
    string name;
    int c, m, e, s;
}s[32];
int n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].name >> s[i].c >> s[i].m >> s[i].e;
        s[i].s = s[i].c + s[i].m + s[i].e;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << s[i].name << ' ' << s[i].c << ' ' << s[i].m << ' ' << s[i].e << ' ' << s[i].s << '\n';
    }
    return 0;
}