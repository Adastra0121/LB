#include<iostream>

using namespace std;

double arr[40][40],ans;
int n, m;

int main(){
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