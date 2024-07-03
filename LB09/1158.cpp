#include<iostream>

using namespace std;

int n, arr[1010], k;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    cin >> k;
    cout << arr[k];
    return 0;
}