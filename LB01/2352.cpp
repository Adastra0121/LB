#include<iostream>

using namespace std;

int arr[10002];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    switch (k)
    {
    case 1:
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << ' ';
        }
        break;
    case 2:
        for (int i = n; i >= 1; i--)
        {
            cout << arr[i] << ' ';
        }
        break;
    case 3:
        for (int i = 1,j = n; i <= j; i++,j--)
        {
            if(i == j) {cout << arr[i];break;}
            cout << arr[i] << ' ' << arr[j] << ' ';
        }
    default:
        break;
    }

    return 0;
}