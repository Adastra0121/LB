#include<iostream>

using namespace std;

int arr[10010];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i >= 1; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}