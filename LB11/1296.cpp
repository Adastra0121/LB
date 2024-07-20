#include<iostream>
using namespace std;
int n,arr[110];
int Max(int *arr,int n){
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        t = max(t,arr[i]);
    }
    return t;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << Max(arr,n);    
    return 0;
}