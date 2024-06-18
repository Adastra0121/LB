#include<iostream>
#include<algorithm>

using namespace std;

int arr[100010];

int main(){
    int n,cnt = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1,arr + 1 + n);
    int mid = arr[n / 2 + 1];
    for (int i = 1; i < n; i++)
    {
        if(mid<=arr[i]) {cnt++;}
    }
    cout << mid << ' ' << cnt;
    return 0;
}