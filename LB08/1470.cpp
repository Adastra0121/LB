#include<iostream>

using namespace std;

int arr[20][20];
int diligence[20][20];
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            diligence[i][j] = arr[i-1][j] + arr[i-1][j+1] + arr[i-1][j-1]
            +arr[i][j-1] + arr[i][j] + arr[i][j+1]
            +arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            cout << diligence[i][j] << ' ';
        }
        cout << endl;
    }
}