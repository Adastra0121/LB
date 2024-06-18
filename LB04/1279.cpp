#include<iostream>
#include<algorithm>

int arr[102];

int main(){
    int n,minn = 1e9 + 7;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std:: cin >> arr[i];
    }  
    std::sort(arr + 1,arr + n + 1);
    for (int i = 1; i < n; i++)
    {

        minn = abs(arr[i] - arr[i+1]) < minn ? abs(arr[i] - arr[i+1]) : minn;
    }
    std:: cout << minn;
    return 0;
}