#include<iostream>
#include<algorithm>

using namespace std;

int arr[35];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1,arr + n + 1,greater<int>());
    for (int i = 1; i <= n; i++)
    {
        cout << (arr[i] + 5) / 6 << ' ';
    }
    return 0;
}