#include<iostream>
#include<algorithm>
using namespace std;
int n, m,a[100010];
bool cmp(int x,int y){
    return (long long)(x) * x % m < (long long)(y) * y % m;
}

int main(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a+1,a+n+1,cmp);
    for(int i = 1;i <= n;i++) cout << a[i] << ' ';
    return 0;
}
