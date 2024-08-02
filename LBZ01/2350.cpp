#include<iostream>
using namespace std;
long long a[1000010], k, x;
const long long mod = 1e12 + 7;
int main(){
    cin >> a[1] >> a[2] >> a[3];
    for (int i = 4; i <= 1000000; i++)
    {
        a[i] = ((a[i-1] % mod) + ((i % mod) * (a[i-2] % mod)) % mod + (2 * a[i -3]) % mod) % mod;
    }
    cin >> k;
    while (k--)
    {
        cin >> x;
        cout << a[x] << ' ';
    }
    return 0;
}