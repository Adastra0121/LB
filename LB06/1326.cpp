#include<iostream>

using namespace std;

char s[15][15];

int main(){
    int n, m,cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
            if(s[i][j] >='A' && s[i][j] <= 'Z') cnt++;
        }
    }
    cout << cnt;
    return 0;
}