#include<iostream>
using namespace std;
int main(){
    int a, d, n;
    cin >> a >> d >> n;
    cout << a + d * (n - 1) << " " << (a * 2 + d * (n - 1)) * n / 2;
}