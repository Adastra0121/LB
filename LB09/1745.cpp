#include<iostream>

using namespace std;

int arr[110], n, x;

int main(){
    cin >> n;
    int m = n;
    while(n--) cin >> x,arr[x+50]++;
    for (int i = 0; i <= 100; i++)
    {
        if(arr[i] * 2 > m){cout << i - 50;return 0;}
    }
    cout << "no" << endl;
    return 0;
}