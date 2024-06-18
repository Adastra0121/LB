#include<iostream>

using namespace std;

int arr[1002];

int main(){
    int n = 0;
    for (int i = 1;; i++)
    {
        cin >> arr[i];
        n++;
        if (arr[i] == 0)
        {
            break;
        }
    }
    int p, x;
    cin >> p >> x;
    for (int i = n; i > p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = x;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}