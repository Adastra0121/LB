#include<iostream>
#include<algorithm>
using namespace std;
struct S{
    string name;
    int c, m, e, s;
}s[33];
int cnt, n;
bool cmp(S &x, S &y){
    return x.name < y.name;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].name >> s[i].c >> s[i].m >> s[i].e;
        s[i].s = s[i].c + s[i].m + s[i].e;
    }
    sort(s+1,s+1+n,cmp);
    for (int i = 1; i <= n; i++) 
        cout << s[i].name << ' ' << s[i].c << ' ' << s[i].m << ' ' << s[i].e << ' ' << s[i].s << endl;
    return 0;
}