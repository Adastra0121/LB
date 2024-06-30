#include<iostream>

using namespace std;

int arr[10][10];

int main(){
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cin >> arr[i][j];
            if(i == j || i + j == 6 + 1){
                arr[i][j] += 10;
            }
        }
    }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << arr[i][j] << ' ';    
        }
        cout << endl;
    }
    return 0;
}