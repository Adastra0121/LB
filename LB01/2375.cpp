#include<iostream>

using namespace std;

int arr[52];

int main(){
    while(true){
    int n,mean = 0,ans = 0;
    cin >> n;
    if (n == 0) {break;}
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mean += arr[i];
    }
    mean /= n;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]<mean) ans += mean - arr[i];
    }
    cout << ans << endl;
    }

    return 0;
}