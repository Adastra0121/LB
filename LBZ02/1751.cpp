#include<iostream>
#include<cmath>
using namespace std;
int a[110][110], n, m;
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[n + 1 -i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}