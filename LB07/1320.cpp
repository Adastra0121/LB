#include<iostream>

using namespace std;

int arr[12][12];

int main(){
    int n, m, ans = 0;
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
        ans = 0;
        for (int j = 1; j <= m; j++)
        {
            ans += arr[i][j];
        }
        cout << ans << endl;
    }
    return 0;
}