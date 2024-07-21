#include<iostream>
#include<algorithm>
using namespace std;
int n, a[110];
bool cmp(int &x, int &y){
    int xx = x % 10 * 6 % 10;
    int yy = y % 10 * 6 % 10;
    if (xx == yy) return x > y;
    return xx < yy;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1,cmp);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}