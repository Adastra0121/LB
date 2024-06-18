#include<iostream>
#include<algorithm>

using namespace std;

int arr[22];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr+1,arr+k+1);
    sort(arr+k+1,arr + n + 1,greater<int>());
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}