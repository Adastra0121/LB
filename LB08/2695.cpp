#include<iostream>

using namespace std;

char arr[110][110];
int m, n;


int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(arr[i][j] == '#') continue;
            int cnt = 1;
            for (int k = i + 1; k <= n && arr[k][j] == '.'; k++) cnt++;
            for (int k = i - 1; k >= 1 && arr[k][j] == '.'; k--) cnt++;
            for (int k = j + 1; k <= m && arr[i][k] == '.'; k++) cnt++;
            for (int k = j - 1; k >= 1 && arr[i][k] == '.'; k--) cnt++;
            ans = max(ans,cnt);
        }
    }
    cout << ans;
    return 0;
}