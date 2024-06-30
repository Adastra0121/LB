#include<iostream>

using namespace std;

int arr[40][40];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i][i] << endl;
    }
    return 0;
}