#include<iostream>

using namespace std;

int arr[1010], n, k;

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    string ans = "no";
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(arr[i] + arr[j] == k) ans = "yes";
        }
    }
    cout << ans;
    return 0;
}