#include<iostream>
#include<algorithm>
using namespace std;
struct S{
    string name;
    int m, c, e, g, s;
    void input(){
        cin >> name >> m >> c >> e >> g;
        s = m + c + e + g;
    }
    void print(){
        cout << name << endl;
    }
}s[50];
bool cmp(S x, S y){
    return x.s < y.s;
}
int n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) s[i].input();
    sort(s + 1,s + n + 1,cmp);
    for (int i = n; i >= n-2; i--) s[i].print();
    return 0;
}