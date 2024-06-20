#include<iostream>

using namespace std;

int arr[10010];

int main(){
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if(arr[j] > arr[j + 1]) 
            {
                ans++;
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    cout << ans;
    return 0;
}