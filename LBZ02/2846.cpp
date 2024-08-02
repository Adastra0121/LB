#include<iostream>
using namespace std;
int n, a[210][210];
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    //顺时针90
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[n + 1 -j][i] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //顺时针180
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[n + 1 - i][n + 1 - j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //顺时针270
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[j][n + 1 - i] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //水平翻转
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //垂直翻转
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //正对角线翻转
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[j][i] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    //反对角线翻转
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[n + 1 - j][n + 1 - i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}