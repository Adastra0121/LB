#include<iostream>

using namespace std;

int arr[12];

int main(){
    int _12 = 1, n, cnt = 0;
    for (int i = 1; i <= 12; i++)
    {
        _12 *= i;
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(arr[i]*arr[j]==_12) cnt++;
        }
        
    }
    cout << cnt;
    return 0;
}