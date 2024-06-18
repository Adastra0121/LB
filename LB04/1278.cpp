#include<iostream>
#include<algorithm>

using namespace std;

int arr[100];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + n);
    if(n%2==0){cout << double(arr[n / 2] + arr[n / 2 - 1]) / 2;}
    else {cout << arr[n/2];}
    return 0;
}