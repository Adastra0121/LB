#include<iostream>

using namespace std;

int arr[102];

int main(){
    int n, m,cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == m) cnt++;
    }
    
    cout << cnt;
    return 0;
}