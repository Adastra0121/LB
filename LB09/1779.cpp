#include<iostream>

using namespace std;

int arr[1010], n, x, ans;

int main(){
    cin >> n;
    while(n--) cin >> x, arr[x]++;
    for (int i = 1; i < 1000; i++)
    {
        ans = arr[i] > arr[ans] ? i : ans;
    }
    cout << ans;
    return 0;
}