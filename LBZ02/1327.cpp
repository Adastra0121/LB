#include<iostream>
using namespace std;
int a[110][110];
int main(){
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][n + 1 -j] << ' ';
        }
        cout << endl;
    }
    cout << '\n';
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[m + 1 - i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}