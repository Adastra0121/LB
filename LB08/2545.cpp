#include<iostream>

using namespace std;

char arr[110][110];

int main(){
    int n, m;
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
            if(arr[i][j] == '*') continue;
            int cnt = (arr[i-1][j-1] == '*') + (arr[i-1][j]=='*') + (arr[i-1][j+1] == '*')
            + (arr[i][j-1] == '*') + (arr[i][j+1] == '*')
            + (arr[i+1][j-1]=='*') + (arr[i+1][j]=='*')+ (arr[i+1][j+1] == '*');
            arr[i][j] = cnt + '0';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}