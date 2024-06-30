#include<iostream>

using namespace std;

int arr[110][110], m, n, ans;

int main(){
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == 1||j == 1 || i == m||j==n) ans+=arr[i][j];
        }
    }    
    cout << ans;
    return 0;
}