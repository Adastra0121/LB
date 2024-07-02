#include<iostream>

using namespace std;

int arr[160][160], n, m;

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= m ; j++) 
            cin >> arr[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= m; j++){
            if((i == 1 && j == 1)||(i == 1&&j==m)||(i == n && j==1)||(i == n && j ==m)){
            int temp = arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1] +
                arr[i][j-1] + arr[i][j+1] + arr[i][j] +
                arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
            cout << temp / 4 << ' ';
            }
            else if(i == 1|| i == n || j ==1 ||j ==m){
            int temp = arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1] +
                arr[i][j-1] + arr[i][j+1] + arr[i][j] +
                arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
            cout << temp / 6 << ' ';
            }
            else{
                int temp = arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1] +
                arr[i][j-1] + arr[i][j+1] + arr[i][j] +
                arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
            cout << temp / 9 << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}