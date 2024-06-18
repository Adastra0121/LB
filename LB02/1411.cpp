#include<iostream>

using namespace std;

int arr[102];
int sum;
int main(){
    int x;
    while (cin >> x)
    {
        if (x == 0)
        {
            break;
        }
        sum++;
        arr[sum] = x;

    }
    for (int i = sum; i >= 1; i--)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}