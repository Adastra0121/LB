#include<iostream>

using namespace std;

int arr[110][110], n, m, temp;

int main(){
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
            temp = arr[i][j] * 5 - arr[i-1][j] - arr[i+1][j] - arr[i][j-1] - arr[i][j+1];
            if(temp < 0) temp = 0;
            if(temp > 255) temp = 255;
            cout << temp << ' ';
        }
        cout << endl;
    }
    return 0;
}