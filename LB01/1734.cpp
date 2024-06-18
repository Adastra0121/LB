#include<iostream>
#include<iomanip>

using namespace std;

int arr[1002];

int main(){
    int n,sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i]; 
        sum += arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << fixed << setprecision(5) << 1.0 * arr[i] / sum << ' ';
    }
    return 0;
}