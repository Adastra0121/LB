#include<iostream>

using namespace std;

int arr[10][10], n, m;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> m >> n;
    for (int i = 1; i <= 5; i++)
    {
        swap(arr[i][m],arr[i][n]);
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}