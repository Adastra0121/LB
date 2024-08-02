#include<iostream>
using namespace std;
long long a[100010], i, j, n, d, ans;
int main(){
    cin >> i >> a[i] >> j >> a[j] >> n;
    d = (a[i] - a[j]) / (i - j);
    a[1] = a[i] - (i - 1) * d;
    ans = (a[1] * 2 + (n - 1) * d) * n / 2;
    cout << ans;
    return 0;
}