#include<iostream>

using namespace std;

int arr[1002];

int main(){
    int n,mean = 0,cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mean += arr[i];
    }
    mean /= n;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]>mean) cnt++;
    }
    cout << cnt;
    return 0;
}