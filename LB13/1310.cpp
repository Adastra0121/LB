#include<bits/stdc++.h>
using namespace std;
int cnt;
struct S{
    string name;
    int c, m, e, s;
}s[33];
bool cmp(S x, S y){
    if (x.s == y.s) return x.name < y.name;
    return x.s > y.s;
} 
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>> s[i].name >> s[i].c >> s[i].m >> s[i].e;
        s[i].s = s[i].c + s[i].m + s[i].e;
    }
    sort(s, s + n, cmp);
    for(int i = 0; i < n; i++){
        cout << s[i].name << ' ' << s[i].c << ' ' << s[i].m << ' ' << s[i].e << ' ' << s[i].s << endl;
    }
    return 0;
}