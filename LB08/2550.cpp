#include<iostream>

using namespace std;

int arr[110][110], ans;


int main(){
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        if(arr[x][y] == 1) {
            ans++;
            arr[x][y]--;
        }else if (arr[x][y] >= 2)
        {
            arr[x][y]--;
        }
        if(arr[x-1][y] == 1) {
            ans++;
            arr[x-1][y]--;
        }else if (arr[x-1][y] >= 2)
        {
            arr[x-1][y]--;
        }if(arr[x+1][y] == 1) {
            ans++;
            arr[x+1][y]--;
        }else if (arr[x+1][y] >= 2)
        {
            arr[x+1][y]--;
        }if(arr[x][y+1] == 1) {
            ans++;
            arr[x][y+1]--;
        }else if (arr[x][y+1] >= 2)
        {
            arr[x][y+1]--;
        }if(arr[x][y-1] == 1) {
            ans++;
            arr[x][y-1]--;
        }else if (arr[x][y-1] >= 2)
        {
            arr[x][y-1]--;
        }
    }
    cout << ans;
}