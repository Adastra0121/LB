#include<iostream>
#include<cmath>
using namespace std;
long long a[100010], n, q, ans;
const long long mod = 1000000007;
int main(){
    cin >> a[1] >> a[3] >> n;
    q = sqrt(a[3] / a[1]);
    for (int i = 2; i <= 100000; i++)
    {
        a[i] = ((a[i - 1] % mod) * (q % mod)) % mod;
    }
    for (int i = 1; i <= n; i++)
    {
        ans = (ans % mod + a[i] % mod) % mod;
    }
    cout << a[n] << ' ' << ans << endl;
    return 0;
}