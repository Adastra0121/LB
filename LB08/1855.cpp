#include<iostream>
#include<cmath>
 
using namespace std;
 
int arr[10][10];
int after_arr[10][10];
 
int main(){
    int m, n;
    cin >> m >> n;
    arr[5][5] = m;
    after_arr[5][5] = m;
    for (int day = 1; day <= n; day++)
    {
        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (arr[i][j])
                {
                    after_arr[i-1][j-1] += arr[i][j];
                    after_arr[i-1][j]   += arr[i][j];
                    after_arr[i-1][j+1] += arr[i][j];
                    after_arr[i][j-1]   += arr[i][j];
                    after_arr[i][j+1]   += arr[i][j];
                    after_arr[i+1][j-1] += arr[i][j];
                    after_arr[i+1][j]   += arr[i][j];
                    after_arr[i+1][j+1] += arr[i][j];
                    after_arr[i][j]     += arr[i][j];
                }
            }
        }
        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                arr[i][j] = after_arr[i][j];
            }
        }
    }
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
