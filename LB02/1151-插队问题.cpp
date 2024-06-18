#include<iostream>

using namespace std;

int arr[102];

int main(){
    int n, x,temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    temp = arr[n];
    for (int i = n; i >= x; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[x] = temp;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}