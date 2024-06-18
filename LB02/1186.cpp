#include<iostream>

using namespace std;

int arr[100002];

int main(){
    int x, p = 0;
    while (cin >> x)
    {
        if(x == 0) break;
        arr[++p] = x;
    }
    if(p%2){
        cout << arr[p/2 + 1];
    }else {
        cout << arr[p/2] + arr[p/2 + 1];
    }
    return 0;
}