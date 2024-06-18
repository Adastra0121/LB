#include<iostream>

using namespace std;

int arr[10010];

int main(){
    int n,temp,p,max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if(max < arr[i]){max = arr[i],p = i;}
    }
    temp = arr[1];
    arr[1] = arr[p];
    arr[p] = temp;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}