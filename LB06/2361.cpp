#include<iostream>

using namespace std;

int f[110][110];

int main(){
    int n, m, q;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> f[i][j];
        }
    }
    cin >> q;
    int a, b, c, d,ans = 0;
    while(q--)
    {
        ans = 0;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; i++)
        {
            for (int j = b; j <= d; j++)
            {
                ans += f[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}