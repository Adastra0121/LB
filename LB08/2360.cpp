#include<iostream>
#include<iomanip>

using namespace std;

long long arr[12][12], n;

int main(){
    cin >> n;
    for(int i = 1; i <= n;i++){
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    double height = 0;
    for(int i = 1; i <= n-1;i++){
        for (int j = 1; j <= n-1; j++)
        {
            double temp = arr[i][j] + arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
            temp = 0.25 * temp;
            height = max(height,temp);
        }
    }
    cout << fixed << setprecision(2) << height;
    return 0;
}