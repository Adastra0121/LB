#include<iostream>

using namespace std;

char cow1[60][60];
char cow2[60][60];

int main(){
    int m, n,ans = 0;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> cow1[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> cow2[i][j];
        }
    }
        for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(cow1[i][j] == cow2[i][j]) ans++;
        }
    }    
    cout << ans << endl;
    return 0;
}