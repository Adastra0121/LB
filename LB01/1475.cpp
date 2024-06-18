#include<iostream>

using namespace std;

int arr[102];

int main(){
    int n,sum = 0,max = -1000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max = max > arr[i] ? max : arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=max) sum += arr[i];
    }
    cout << sum;
    return 0;
}