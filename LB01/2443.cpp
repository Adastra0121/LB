#include<iostream>
 
using namespace std;
 
long long arr[50002];
long long mod = 1e9 + 7;

int main(){
    long long n, q;
    cin >> n >> q;

    // 修改操作
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        switch (c)
        {
        case '+':
            long long p, d;
            cin >> p >> d;
            arr[p] = (arr[p] + d) % mod;
            break;
        case '*':
            long long m;
            cin >> m;
            for (int j = 1; j <= n; j++)
            {
                arr[j] = (m * arr[j]) % mod;
            }
            break;
        default:
            break;
        }
    }
    // 输出数组
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] % mod << ' ';
    }
    
    return 0;
}