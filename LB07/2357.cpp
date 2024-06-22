#include<iostream>

using namespace std;

int arr[20][20];

int main(){
    int n, m, ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        ans = 0;
        for (int j = 1; j <= n; j++)
        {
            ans += arr[j][i];
        }
        cout << ans << endl;
    }
    return 0;
}