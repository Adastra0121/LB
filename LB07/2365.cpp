#include<iostream>

using namespace std;

int arr[110][110];

int main(){
    int n, m, op, x, y, z;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> op;
    while (op--)
    {
        cin >> x >> y >> z;
        if (x == 0)
        {
            for (int i = 1; i <= m; i++)
            {
               swap(arr[y][i],arr[z][i]);
            }
        }
        if (x == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                 swap(arr[i][y],arr[i][z]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}



