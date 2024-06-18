#include<iostream>

using namespace std;

int arr[10010];

int main(){
    int n, num,p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    for (int i = 1; i <= n; i++)
    {
        if(num == arr[i]) p = i;
    }
    cout << p;
    return 0;
}