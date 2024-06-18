#include<iostream>

using namespace std;

int arr[102];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = x; i <= n -1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 1; i <= n - 1; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}