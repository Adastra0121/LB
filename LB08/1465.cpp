#include<iostream>

using namespace std;

char arr[110][110];

int main(){
    int n, m;
    string s = "Still life";
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
            int live = (arr[i-1][j] == '*') + (arr[i-1][j+1] == '*') + (arr[i-1][j-1] == '*')
                + (arr[i][j-1] == '*') + (arr[i][j+1] == '*')
                + (arr[i+1][j] == '*') + (arr[i+1][j-1]=='*') + (arr[i+1][j+1] == '*');
            int dead = 8 - live;
            if(arr[i][j]=='*'){
                if(live<2||live >3) s = "Other";
            }else{
                if(live == 3) s = "Other";
            }
        }
    }
    cout << s;
    return 0;
}