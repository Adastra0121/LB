#include<iostream>
using namespace std;
long long fibonacci[100], n;
int main(){
    cin >> n;
    fibonacci[0] = 0,fibonacci[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    for (int i = n - 1 ; i >= 0; i--)
    {
        cout << fibonacci[i] << ' ';
    }
    return 0;
}