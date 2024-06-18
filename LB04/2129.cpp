#include<iostream>
#include<algorithm>

using namespace std;

int arr[300010];

int main(){
    int n;
    long long ans = 0;
    cin >> n;
    for (int i = 1; i <= 3*n; i++)
    {
        cin >> arr[i];
    }
    sort(arr+1,arr+ 3*n +1);
    for (int i = 3 * n - 1; i > n; i-=2)
    {
        ans += arr[i];
    }
    cout << ans;
    return 0;
}