#include<iostream>

using namespace std;

int arr[110][110];

int main(){
    int n, m, total, mean, maxn = -1e9, minn = 1e9;
    int _total = 0, _mean, _maxn = -1e9, _minn = 1e9;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
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
    //行
    for (int i = 1; i <= n; i++)
    {
        total = 0,maxn = -1e9, minn = 1e9;
        for (int j = 1; j <= m; j++)
        {
            total += arr[i][j];
            maxn = maxn > arr[i][j] ? maxn : arr[i][j];
            minn = minn < arr[i][j] ? minn : arr[i][j];
        }
        mean = total / m;
        cout << total << ' ' << mean << ' ' << maxn << ' ' << minn << endl;
    }
    
    //列
    for (int i = 1; i <= m; i++)
    {
        total = 0, maxn = -1e9, minn = 1e9;
        for (int j = 1; j <= n; j++)
        {
            total += arr[j][i];
            maxn = maxn > arr[j][i] ? maxn : arr[j][i];
            minn = minn < arr[j][i] ? minn : arr[j][i];
        }
        _total += total;
        _mean += mean;
        _maxn = _maxn > maxn ? _maxn : maxn;
        _minn = _minn < minn ? _minn : minn;
        mean = total / n;
        cout << total << ' ' << mean << ' ' << maxn << ' ' << minn << endl;
    }
    //最后一行
    cout << _total << " "<< _total / (n*m) <<" "<< _maxn << ' ' <<_minn;
    return 0;
}