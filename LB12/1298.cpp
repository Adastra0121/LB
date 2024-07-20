#include<bits/stdc++.h>
using namespace std;
int n,a[110];
bool cmp(int &x,int &y){
    int tx = x % 10 + x / 10 % 10 + x / 100 % 10 + x / 1000 % 10;
    int ty = y % 10 + y / 10 % 10 + y / 100 % 10 + y / 1000 % 10;
    if(tx != ty) return tx < ty;
    return x < y;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin>>a[i];
    sort(a+1,a+n+1,cmp);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}