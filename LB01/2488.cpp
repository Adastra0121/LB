#include<iostream>

using namespace std;

long long arr[100002];

int main(){
    long long n,sum = 0;
    cin >> n;
    if(n < 3) {cout << "No";return 0;}
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= sum-arr[i])
        {
            cout << "No";
            return 0;
        }    
    }
    cout << "Yes";
    return 0;
}