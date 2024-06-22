#include<iostream>

using namespace std;

int arr[10][10], ans,total;

int main(){
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 6; i++)
    {
        ans = 0;
        for (int j = 1; j <= 3; j++)
        {
            ans += arr[i][j];
        }
        cout << ans << ' ';
    }
    cout << endl;
    for (int i = 1; i <= 3; i++)
    {
        ans = 0;
        for (int j = 1; j <= 6; j++)
        {
            ans += arr[j][i];
        }
        total += ans;
        cout << ans << ' ';
    }
    cout << '\n' << total;
    return 0;
}