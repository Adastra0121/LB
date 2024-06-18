#include<iostream>
#include<algorithm>

using namespace std;

int arr[30];

int main(){
    int n, k, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    printf("%.2lf",double(sum) / k);
}