#include<iostream>

using namespace std;

int arr[10010];

int main(){
    int n, mean = 0,p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mean += arr[i];
    }
    mean /= n;
    for (int i = 1; i < n + 1; i++)
    {
        if(arr[i]>mean) 
        {
            p = i;
            break;
        }
    }
    cout << p;
    return 0;
}